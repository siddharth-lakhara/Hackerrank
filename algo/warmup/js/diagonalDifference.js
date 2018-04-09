function diagonalDifference(a) {
    let sum1 = 0;
    let sum2 = 0;
    const len = a.length;
    a.map((row, index1) => {
        sum1 += row[index1];
        sum2 += row[len - 1 - index1];
    })
    return Math.abs(sum1 - sum2);
}