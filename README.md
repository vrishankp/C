# C
Here is a demonstration of how tweaking a few lines of codes can vastly increase the efficiency of a program.

prime.c uses a basic formula to find a prime number: mod a number with every number less than half of it. If none of the equations result in 0, then the answer is a prime.

fastPrime.c updates 2 things to drastically increase the efficiency:
1. Cap the loop at the square root of the number, rather than the half as square root is usually smaller and thus requires fewer iterations.
2. Store a list of primes and only check if the number is divisible by any of the primes in the list. As all numbers are either primes or a factor of primes, by just comparing a number with primes, we need to check far fewer numbers, yet we will still be able to accruately determine if the number is a prime or not.
