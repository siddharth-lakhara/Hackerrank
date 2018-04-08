function getLetter(s) {
    let letter;
    let newString = s.toLowerCase();
    switch (true) {
        case 'aeiou'.includes(newString[0]):
            letter = 'A';
            break;
        case 'bcdfg'.includes(newString[0]):
            letter = 'B';
            break;
        case 'hjklm'.includes(newString[0]):
            letter = 'C';
            break;
        default:
            letter = 'D';
            break;
    };
    return letter;
}