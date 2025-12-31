// Solution for Problem 4 — Switch-case: monthDays

function monthDays(month) {
  if (typeof month !== 'string') return 'invalid';
  switch (month.toLowerCase()) {
    case 'january':
    case 'march':
    case 'may':
    case 'july':
    case 'august':
    case 'october':
    case 'december':
      return 31;
    case 'april':
    case 'june':
    case 'september':
    case 'november':
      return 30;
    case 'february':
      return 28; // ignore leap years as requested
    default:
      return 'invalid';
  }
}

// Example usage
console.log('February ->', monthDays('February'));
console.log('April ->', monthDays('April'));
console.log('Foo ->', monthDays('Foo'));

module.exports = { monthDays };