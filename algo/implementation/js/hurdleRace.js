const hurdleRace = (k, height) => {
    const max = Math.max.apply(null, height);
    if (max - k > 0) { return max - k; }
    else { return 0; }
}