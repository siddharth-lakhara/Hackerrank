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

const rev = (n) => {
    let reversed = 0;
    while (n) {
        let remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = parseInt(n / 10);
    }
    return reversed;
}

function beautifulDays(i, j, k) {
    let count = 0;
    for (let start = i; start <= j; start += 1) {
        let reversed = rev(start);
        if (Math.abs(start - reversed) % k === 0) { count += 1; }
    }
    return count;

}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);
    const ijk = readLine().split(' ');
    const i = parseInt(ijk[0], 10);
    const j = parseInt(ijk[1], 10);
    const k = parseInt(ijk[2], 10);
    let result = beautifulDays(i, j, k);
    ws.write(result + "\n");
    ws.end();
}
