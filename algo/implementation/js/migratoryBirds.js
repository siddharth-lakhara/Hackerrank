function migratoryBirds(n, ar) {
    let count = new Array(5).fill(0);
    ar.map((birds) => {
        count[birds - 1] += 1;
    })
    const max = Math.max.apply(null, count);
    return count.indexOf(max) + 1;
}
