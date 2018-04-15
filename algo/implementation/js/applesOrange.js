function countApplesAndOranges(s, t, a, b, apples, oranges) {
    const left_corner = Math.min(s, t);
    const right_corner = Math.max(s, t);

    const scores_apples = apples.reduce((prev, curr) => {
        const dist = a + curr;
        if (dist >= left_corner && dist <= right_corner) {
            prev += 1;
        }
        return prev;
    }, 0);
    const scores_orange = oranges.reduce((prev, curr) => {
        const dist = b + curr;
        if (dist >= left_corner && dist <= right_corner) {
            prev += 1;
        }
        return prev;
    }, 0);
    console.log(scores_apples);
    console.log(scores_orange);

}
