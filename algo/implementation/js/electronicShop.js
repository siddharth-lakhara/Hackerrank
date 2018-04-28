function getMoneySpent(keyboards, drives, b) {
    let amountSpent = 0;

    keyboards.forEach((keyCost) => {
        drives.forEach((driveCost) => {
            if (keyCost + driveCost <= b && keyCost + driveCost > amountSpent) {
                amountSpent = keyCost + driveCost;
            }
        });
    });

    if (amountSpent === 0) {
        return (-1);
    } else {
        return (amountSpent);
    }
}