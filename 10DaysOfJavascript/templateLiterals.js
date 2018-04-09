function sides(literals, ...expressions) {
    const [area, perimeter] = expressions;
    const D = Math.sqrt(Math.abs((perimeter * perimeter) - (16 * area)));
    const s1 = (perimeter + D) / 4;
    const s2 = (perimeter - D) / 4;
    if (s1 > s2)
        return [s2, s1];
    return [s1, s2];
}