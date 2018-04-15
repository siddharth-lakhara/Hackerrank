function divisibleSumPairs(n, k, ar) {
    let count = 0;
    for (let i = 0; i < ar.length - 1; i += 1) {
        for (let j = i + 1; j < ar.length; j += 1) {
            if ((ar[i] + ar[j]) % k === 0)
                count += 1;
        }
    }
    return count;
}