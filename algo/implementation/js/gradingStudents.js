function gradingStudents(grades) {
    return grades.map((elem) => {
        if (elem < 38)
            return elem;
        if (elem % 5 >= 3) {
            const multiplier = Math.floor(elem / 5) + 1;
            return 5 * multiplier;
        }
        return elem;
    })
}