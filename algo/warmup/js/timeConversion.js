function timeConversion(s) {
    const elem = s.split(':');

    if (elem[2].includes("PM")) {
        if (parseInt(elem[0]) !== 12) {
            let num = parseInt(elem[0]);
            num += 12;
            elem[0] = num.toString();
        }
    } else {
        if (parseInt(elem[0]) === 12) {
            elem[0] = "00";
        }
    }

    elem[2] = elem[2].substring(0, 2);
    const retString = elem.join(':')
    return retString;

}