
const calcGCD = (num1, num2) => {
    while (num2 > 0) {
        let temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
};

const getLCM = (b) => {
    let init = b[0];
    b.map((elem) => {
        init = init * (elem / calcGCD(init, elem));
    });
    return init;
};

const getGCD = (a) => {
    let init = a[0];
    a.map((elem) => {
        init = calcGCD(init, elem);
    });
    return init;
};

const getTotalX = (a, b) => {
    const gcd = getGCD(b);
    const lcm = getLCM(a);
    let total = 0;

    for (let i = 0; i * lcm <= gcd; i++) {
        if (gcd % (i * lcm) === 0) { total += 1; }
    }
    return total;
};