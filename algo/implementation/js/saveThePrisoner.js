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

function saveThePrisoner(n, m, s) {
    let chair = (s + m - 1) % n;
    if (chair % n === 0) {
        return n;
    }
    return chair;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);
    const t = parseInt(readLine(), 10);
    for (let tItr = 0; tItr < t; tItr++) {
        const nms = readLine().split(' ');
        const n = parseInt(nms[0], 10);
        const m = parseInt(nms[1], 10);
        const s = parseInt(nms[2], 10);
        let result = saveThePrisoner(n, m, s);
        ws.write(result + "\n");
    }
    ws.end();
}
