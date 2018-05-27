function findDigits(n) {
    let count = 0;
    let number = n;
    let digit = 0;
    while (number >= 1) {
        digit = number % 10;
        if (digit !== 0) {
            if (n % digit === 0) {
                count += 1;
            }
        }
        number = parseInt(number / 10);
    }
    return count;
}