// Solution for Problem 3 — Switch-case: gradeLetter

function gradeLetter(score) {
  if (typeof score !== 'number' || Number.isNaN(score) || score < 0 || score > 100)
    return 'invalid';
  const tens = Math.floor(score / 10);
  switch (tens) {
    case 10:
    case 9:
      return 'A';
    case 8:
      return 'B';
    case 7:
      return 'C';
    case 6:
      return 'D';
    default:
      return 'F';
  }
}

// Example usage
console.log('95 ->', gradeLetter(95));
console.log('72 ->', gradeLetter(72));
console.log('-1 ->', gradeLetter(-1));

module.exports = { gradeLetter };