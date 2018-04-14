'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(str => str.trim());

    main();
});

function readLine() {
    return inputString[currentLine++];
}

function staircase(n) {
    let str = '';
    const lim = n - 1;
    for (let i = 0; i < n; i++) {
        str = '';
        for (let j = 0; j < lim - i; j++) {
            str += ' ';
        }
        for (let j = lim - i; j < n; j++) {
            str += '#';
        }
        console.log(str);
    }
}

function main() {
    const n = parseInt(readLine(), 10);

    staircase(n);
}
