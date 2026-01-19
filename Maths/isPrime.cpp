bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}


// This function checks whether a number is prime or not.
// If the number is less than or equal to 1, it is not prime.
// Then it checks divisibility from 2 to square root of n.
// If any divisor is found, it returns false, otherwise true.
