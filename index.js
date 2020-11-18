const puppeteer = require('puppeteer');
const input = require('./src/input');
const {readList,writeFile} = require('./src/fileManipulation');
const {logIn} = require('./src/browserNavagation')
const fileOutputPath = './uri-codes/';
const hideBrowser = true;
const fs = require('fs');


async function scrape()  {

    // const userData = {
    //     email : '',
    //     password : '',
    //     url : 'https://www.urionlinejudge.com.br/judge/pt/login?redirect=%2Fpt%2F'
    // }
    const userData = await input();
    //Changing the headless value to false allow to watch the process in the browser
    const browser = await puppeteer.launch({
        headless: hideBrowser
    })
    const page = await browser.newPage();
    await logIn(page,userData);
    await buildIdList(page);  
    const array = await readList();

    console.log('Writing code file\n');
    for (let j = 0; j < array.length-1; j++) {
        await page.goto("https://www.urionlinejudge.com.br/judge/pt/runs/code/" + array[j]);
        await page.waitFor(100);
        console.log(`${j} of ${array.length-1} codes\n`);
        const result = await getCode(page);
        let fileFormat = await getCodeExtesion(result.extesion);
        let fileName = result.title + fileFormat;
        await writeFile(fileOutputPath,fileName,result.code);
    }

    browser.close()
};


async function getCode(page){
    const result = await page.evaluate(async () => {
        let extesion = document.querySelectorAll('dd')[2].textContent.trim().split(' ')[0].toLowerCase();
        let title =  document.querySelector('dd').textContent;
        title = title.trim();
        title = title.replace(/\s+/g, '-');
        let textCode = document.querySelectorAll('div.ace_line');
        textCode.forEach(function(el){ 
            el.innerHTML = el.innerHTML.replace(/&nbsp;/gi, ' ')
        }
        );
        let code = "";
        for (let index = 0; index < textCode.length; index++) {
            let codeLine = textCode[index].childNodes;
            for (let i = 0; i < codeLine.length; i++) {       
                code += ((codeLine[i].textContent)); 
            }
            code += '\n';
        }
        return {title,code,extesion};
    });
    return result;
}

async function getCodeExtesion(lenguage){
    switch (lenguage) {
        case "java":
            return ".java";
            case "python":
                return ".py";
                default:
                    return ".cpp"
                }
            }
            async function buildIdList(page){
                
                await fs.writeFileSync("./src/list.txt",'', 
                { 
                    encoding: "utf8", 
                    flag: "w+", 
                    mode: 0o666 
                }); 
                console.log('Building the list with the links')
                await page.goto('https://www.urionlinejudge.com.br/judge/pt/runs?answer_id=1');
                await page.waitFor(100);
                const indexMax = await page.evaluate(async () => {
                    let indexMax = document.querySelector('#table-info');
                    indexMax = indexMax.textContent.trim().split(' ');
                    indexMax = indexMax[indexMax.length-1];
                    return indexMax;
                });
                for (let index = 1; index <= indexMax; index++) {
                    console.log(`Page ${index} of ${indexMax}`)
                    await page.goto(`https://www.urionlinejudge.com.br/judge/pt/runs?answer_id=1&page=${index}`);
                    await page.waitFor(100);      
                    let array = await page.evaluate(async () => {
                        let array = [];
                        let id = document.querySelectorAll('.id a')
                        id.forEach(e => array.push(e.textContent));
                        return array;
                    });
                    array += ",";
                    await fs.writeFileSync("./src/list.txt",array, 
                    { 
                        encoding: "utf8", 
                        flag: "a+", 
                        mode: 0o666 
                    }); 
                }
            }
            
scrape();

module.exports = {scrape};