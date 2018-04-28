function pageCount(n, p) {
    // start search from end
    if (n - p < p) {
        return Math.floor(n / 2) - Math.floor(p / 2)
    }
    return Math.floor(p / 2);
}
