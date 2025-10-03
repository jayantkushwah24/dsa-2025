const arr = [12, 35, 2, 47, 86, 23, 87, 91];

function searchElement(num) {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === num) {
      return i;
    }
    if (i === arr.length - 1) return -1;
  }
}
// console.log(searchElement(8));

const arr2 = [12, -35, 2, 47, -86, 23, 87, -91];

function countNegatives() {
  let count = 0;
  for (let i = 0; i < arr2.length; i++) {
    if (arr2[i] < 0) {
      count++;
    }
  }
  return count;
}
// console.log(countNegatives());

function largestNumber() {
  let largest = Number.MIN_VALUE;
  for (let i = 0; i < arr2.length; i++) {
    if (arr2[i] > largest) {
      largest = arr2[i];
    }
  }
  return largest;
}
console.log(largestNumber());
