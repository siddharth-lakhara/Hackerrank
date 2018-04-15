function breakingRecords(scores) {
    let countMin = 0;
    let countMax = 0;
    let max = scores[0];
    let min = scores[0];
    scores.map((score) => {
        if (score > max) {
            countMax += 1;
            max = score;
        }
        if (score < min) {
            countMin += 1;
            min = score;
        }
    });
    return [countMax, countMin];
}