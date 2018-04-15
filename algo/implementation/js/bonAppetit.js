const parseInput = (input) => {
    const lines = input.split("\n");
    const [n, k] = lines.shift().split(" ").map(Number);
    const bill = lines.shift().split(" ").map(Number);
    const [chargedAmount] = lines.shift().split(" ").map(Number);

    const sum = bill.reduce((prev, curr) => (prev + curr), 0);
    const correctAmount = (sum - bill[k]) / 2;
    if (chargedAmount === correctAmount) { console.log("Bon Appetit"); }
    else { console.log(chargedAmount - correctAmount); }
}

process.stdin.resume();
process.stdin.setEncoding("ascii");
var _input = "";
process.stdin.on("data", function (chunk) {
    _input += chunk;
});
process.stdin.on("end", function () {
    parseInput(_input);
});
