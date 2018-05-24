'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

function pickingNumbers(a) {
    let max = 0;
    for (let i = 0; i < 99; i++) {
        max = Math.max(a[i] + a[i + 1], max);
    }
    return max;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);
    const n = parseInt(readLine(), 10);
    let numbers = new Array(100).fill(0);
    readLine()
        .split(' ')
        .map((input) => {
            parseInt(input, 10);
            numbers[input] += 1;
        });
    let result = pickingNumbers(numbers);
    ws.write(result + "\n");
    ws.end();
}
