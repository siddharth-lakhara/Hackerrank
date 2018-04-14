function miniMaxSum(arr) {
    let min = Number.MAX_SAFE_INTEGER;
    let max = Number.MIN_SAFE_INTEGER;
    const sum = arr.reduce((prev, curr) => {
        if (curr > max) { max = curr; }
        if (curr < min) { min = curr; }
        return prev + curr;
    }, 0);
    console.log(sum - max, sum - min);
}