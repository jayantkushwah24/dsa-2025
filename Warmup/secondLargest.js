const arr = [21, 3, 455, 112, 11, 997, 23, 39];

function secondLargest() {
  let firstLargest = Number.MIN_VALUE;
  let secondLargest = Number.MIN_VALUE;

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] > firstLargest) {
      secondLargest = firstLargest;
      firstLargest = arr[i];
    } else if (arr[i] > secondLargest) {
      secondLargest = arr[i];
    }
  }
  return secondLargest;
}
console.log(secondLargest());
