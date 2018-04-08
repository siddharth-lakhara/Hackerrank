// this solution uses plain logic to find answer
// arrays1.js contains solution which uses inbuilt sort function

function getSecondLargest(nums) {
    let largest = 0;
    let secondLargest = 0;
    for (var i = 0; i < nums.length; i++) {
        if (nums[i] > largest) {
            secondLargest = largest;
            largest = nums[i];
        }
        else if (nums[i] != largest && nums[i] > secondLargest) {
            secondLargest = nums[i];
        }
    }
    return secondLargest;
}

// console.log(getSecondLargest([1,10,5,3,2]));