function eligibleToVote(age) {
  if (age < 1) {
    console.log("invalid input");
  } else if (age < 18) {
    console.log("not eligible to code");
  } else {
    console.log("eligible to vote");
  }
}

eligibleToVote(-1);
eligibleToVote(16);
eligibleToVote(24);
