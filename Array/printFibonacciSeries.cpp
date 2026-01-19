function generateFibonacciNumbers(n) {
    let result = [];
    let a = 0, b = 1;

    for (let i = 0; i < n; i++) {
        result.push(a);
        let next = a + b;
        a = b;
        b = next;
    }

    return result;
}

module.exports.generateFibonacciNumbers = generateFibonacciNumbers;
// This function generates the first n Fibonacci numbers.
// It initializes the first two Fibonacci numbers, 0 and 1.