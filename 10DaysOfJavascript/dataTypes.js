function performOperation(secondInteger, secondDecimal, secondString) {
    const firstInteger = 4;
    var sum1 = firstInteger + parseInt(secondInteger);

    const firstDecimal = 4.0;
    var sum2 = firstDecimal + parseFloat(secondDecimal);

    const firstString = 'HackerRank ';
    var sum3 = firstString + secondString;

    console.log(sum1);
    console.log(sum2);
    console.log(sum3);
}