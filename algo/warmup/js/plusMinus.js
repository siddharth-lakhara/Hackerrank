function plusMinus(arr) {
    let pos = 0;
    let neg = 0;
    let zero = 0;
    const len = arr.length;
    arr.map((elem) => {
        if (elem > 0) pos++;
        else if (elem < 0) neg++;
        else zero++;
    });
    console.log(pos / len);
    console.log(neg / len);
    console.log(zero / len);
}