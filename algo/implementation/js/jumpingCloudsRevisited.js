function jumpingOnClouds(c, k) {
    let cur_pos = 0;
    let energy = 100;
    for (let i = 0; ; i++) {
        cur_pos = (cur_pos + k) % (c.length);
        energy = c[cur_pos] ? energy - 3 : energy - 1;
        if (cur_pos == 0) { break; }
    }
    return energy;
}