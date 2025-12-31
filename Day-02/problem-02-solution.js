// Solution for Problem 2 — Switch-case: animalSound

function animalSound(animal) {
  if (typeof animal !== 'string') return 'unknown';
  switch (animal.toLowerCase()) {
    case 'dog':
      return 'woof';
    case 'cat':
      return 'meow';
    case 'cow':
      return 'moo';
    case 'sheep':
      return 'baa';
    default:
      return 'unknown';
  }
}

// Example usage
console.log('dog ->', animalSound('dog'));
console.log('cat ->', animalSound('Cat'));
console.log('lion ->', animalSound('lion'));

module.exports = { animalSound };