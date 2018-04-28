function maximumProgramValue(n) {
    let programValue = 0;
    let inputs = [];
    for (let i = 0; i < n; i++) {
        let [cmd, num] = readLine().split(' ');
        if (cmd === 'add') {
            if (Number(num) > 0) { programValue += Number(num); }
        }
        else {
            if (Number(num) > programValue) { programValue = Number(num); }
        }
    }
    return programValue;
}
