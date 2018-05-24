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

function circularArrayRotation(a, k, m) {
    let len = a.length
    k = k % len;
    let index = 0;
    return m.map((q) => {
        index = (q - k + len) % len;
        return a[index];
    });
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);
    const nkq = readLine().split(' ');
    const n = parseInt(nkq[0], 10);
    const k = parseInt(nkq[1], 10);
    const q = parseInt(nkq[2], 10);
    const a = readLine().split(' ').map(aTemp => parseInt(aTemp, 10));
    let m = [];
    for (let i = 0; i < q; i++) {
        const mItem = parseInt(readLine(), 10);
        m.push(mItem);
    }
    let result = circularArrayRotation(a, k, m);
    ws.write(result.join("\n") + "\n");
    ws.end();
}
