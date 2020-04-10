const puppeteer = require('puppeteer');
async function logIn(page,userData) {

    await page.goto(userData.url);
    await page.waitFor(1000);
    await page.type('.email', userData.email);
    await page.waitFor(1000);
    await page.type('#password', userData.password);
    await page.waitFor(100);
    await page.keyboard.press('Enter');
    await page.waitForNavigation();
}


module.exports = {
    logIn,
}