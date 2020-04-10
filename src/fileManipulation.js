const fs = require("fs");
const { exec } = require("child_process");

async function readList(){
    let text = fs.readFileSync('./src/list.txt').toString('utf-8');
    let array =  text.split(",");
    return array;
}

async function writeFile(path,fileName,code){
    fs.writeFileSync((path + fileName),code,{'flags': 'a'});
}

//This way of code formating is no longer necessary
async function formatCode(file){
    exec(`clang-format -i  ./uri-codes/${file}`, (error, stdout, stderr) => {
        if (error) {
            console.log(`error: ${error.message}`);
            return;
        }
        if (stderr) {
            console.log(`stderr: ${stderr}`);
            return;
        }
        console.log(`stdout: ${stdout}`);
    });
}

// async function buildIdList(){

// }
    
module.exports = {
    readList,
    writeFile,
}
