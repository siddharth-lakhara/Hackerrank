function modifyArray(nums) {
    const modifiedArray = nums.map((elem) => {
        if (elem % 2 === 0) return elem * 2;
        return elem * 3;
    });
    return modifiedArray;
}