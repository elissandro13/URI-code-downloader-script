const readline = require('readline-sync');
function getUserInput() {
    
    const userData = {
        url: 'https://www.urionlinejudge.com.br/judge/pt/login?redirect=%2Fpt%2F'
    }
    
    console.log("If you are afraid of typing your data, please check the code\n");

    userData.email = askUserEmail();
    userData.password = askUserPassword();

    function askUserEmail(){
        return readline.question('What is your email: \n')
    }
    
    function askUserPassword(){
        return readline.question('What is your password: \n')
    }

    return userData;
}

module.exports = getUserInput