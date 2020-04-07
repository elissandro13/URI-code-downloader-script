const puppeteer = require('puppeteer');
const url = 'https://www.urionlinejudge.com.br/judge/pt/login?redirect=%2Fpt%2F';
const userEmail = '';
const userPassword = '';
const dictionary = require('./dicionario.js');
const array = dictionary.array;
const fs = require('fs');
const format = require("./index");
// let codeUrl = 'https://www.urionlinejudge.com.br/judge/pt/runs/code/';


let scrape = async () => {
    const browser = await puppeteer.launch({
        headless: true
    })
    const page = await browser.newPage();
    await page.goto(url);
    await page.waitFor(1000);
    await page.type('.email', userEmail);
    await page.waitFor(1000);
    await page.type('#password', userPassword);
    await page.waitFor(100);
    await page.keyboard.press('Enter');
    await page.waitForNavigation();
    


for (let j = 0; j < array.length; j++) {
    await page.goto("https://www.urionlinejudge.com.br/judge/pt/runs/code/" + array[j]);
    await page.waitFor(100);
    console.log(`${j} of ${array.length} codes\n`);
    const result = await page.evaluate(async () => {
        let title =  document.querySelector('dd').textContent;
        title = title.trim();
        title = title.replace(/\s+/g, '-');
        let textCode = document.querySelectorAll('div.ace_line');
        textCode.forEach(function(el){ 
            el.innerHTML = el.innerHTML.replace(/&nbsp;/gi, '')
            }
        );
        let code = "";
        for (let index = 0; index < textCode.length; index++) {
            let codeLine = textCode[index].childNodes;
            for (let i = 0; i < codeLine.length; i++) {       
                code += ((codeLine[i].textContent) + ' '); 
            }
            code += '\n';
        }
        return {title,code};
    });
    let fileName = result.title + '.cpp';
    fs.writeFileSync(('./' + fileName), result.code);
    format(fileName);
    // console.log(result.title, result.code);
        


    }

    browser.close()
};

scrape();
// scrape().then((value) => {
//     console.log(value)
// })
