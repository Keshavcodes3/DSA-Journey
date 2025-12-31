// Solution for Problem 5 — Switch-case: httpStatusMessage

function httpStatusMessage(code) {
  switch (code) {
    case 200:
      return 'OK';
    case 201:
      return 'Created';
    case 400:
      return 'Bad Request';
    case 401:
      return 'Unauthorized';
    case 404:
      return 'Not Found';
    case 500:
      return 'Internal Server Error';
    default:
      return 'Unknown Status';
  }
}

// Example usage
console.log('200 ->', httpStatusMessage(200));
console.log('404 ->', httpStatusMessage(404));
console.log('418 ->', httpStatusMessage(418));

module.exports = { httpStatusMessage };