// this solution uses inbuilt sort function
// arrays2.js contains solution which uses plain logic

function getSecondLargest(nums) {
    const points = nums.sort((a,b)=>{
        return b-a;
    });
    // not taking points[1] coz maximum number can be repeated
    let index = 0;
    let max = points[0];
    while (index++ < points.length) {
        if (points[index] != max) {
            return points[index];
        }
    }
}

// console.log(getSecondLargest([1,10,5,3,2]));