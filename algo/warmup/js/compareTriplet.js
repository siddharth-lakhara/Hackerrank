function solve(a0, a1, a2, b0, b1, b2) {
    let mark1 = 0;
    let mark2 = 0;

    if (a0 > b0) mark1++;
    if (a0 < b0) mark2++;
    if (a1 > b1) mark1++;
    if (a1 < b1) mark2++;
    if (a2 > b2) mark1++;
    if (a2 < b2) mark2++;

    return [mark1, mark2];
}