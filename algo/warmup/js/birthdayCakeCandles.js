function birthdayCakeCandles(n, ar) {
    let freq = {}
    const max = ar.reduce((prev, curr) => {
        if (freq[curr] === undefined) {
            freq[curr] = 0;
        }
        freq[curr]++
        if (curr > prev) { return curr; }
        else { return prev; }
    }, Number.MIN_SAFE_INTEGER)
    return freq[max];
}