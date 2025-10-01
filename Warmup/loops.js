function sumOfNNaturalNumber(num) {
  let sum = 0;
  for (let i = 1; i <= num; i++) {
    sum += i;
  }
  return sum;
}

console.log(sumOfNNaturalNumber(12));
console.log(sumOfNNaturalNumber(10));
