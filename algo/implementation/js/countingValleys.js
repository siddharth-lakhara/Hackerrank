function countingValleys(_, s) {
    let valleys = 0;
    s = s.split('');
    s.reduce((prev, curr) => {
        curr = (curr === 'D') ? -1 : 1;
        if (prev === 0 && curr === -1) { valleys += 1; }
        return prev + curr;
    }, 0);
    return valleys;
}
