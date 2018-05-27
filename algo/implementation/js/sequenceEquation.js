function permutationEquation(p) {
    let arr = new Array(p.length).fill(0)
    p.map((elem, index) => {
        arr[elem - 1] = index;
    });
    const results = arr.map((elem) => {
        let index = elem;
        return arr[index] + 1;
    });
    return results;
}