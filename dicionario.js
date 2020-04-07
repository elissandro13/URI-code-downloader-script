const fs = require("fs");
let text = fs.readFileSync('./lista.txt').toString('utf-8');
let array =  text.split("\n");

module.exports.array = array;
