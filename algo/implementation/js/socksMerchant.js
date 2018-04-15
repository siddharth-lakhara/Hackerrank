function sockMerchant(n, ar) {
    let set1 = new Set();
    let count = 0;
    ar.map((elem) => {
        if (set1.has(elem)) {
            set1.delete(elem);
            count += 1;
        } else {
            set1.add(elem);
        }
    });
    return count;
}