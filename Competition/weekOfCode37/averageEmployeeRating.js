function averageOfTopEmployees(rating) {
    const filteredRating = rating.filter((elem) => (elem >= 90));
    const total = filteredRating.reduce((prev, curr) => (prev + curr));
    const average = (total / filteredRating.length)
    const rounded = Math.round(average * 100) / 100;
    console.log(rounded.toFixed(2));
}