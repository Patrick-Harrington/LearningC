/*
    Single Prime -- similar to Prime Time, but accepts a single integer rather than 
    a range, then determines if it is prime.

    Written by: Pat Harrington
    Date: 2/7/2024
*/

#include <stdio.h>
#include <stdbool.h>



bool determinePrime(int n) {
    // Handle special cases
    if (n < 2) { 
        return false; // Because 1 and all negatives are excluded
    } else if (n == 2) {
        return true; // Because 2 is the only even prime
    } else if (n % 2 == 0) {
        return false; // Because anything other then 2 that is divisible by 2 is not prime
    }

      
 /* Start at 3 because first integer outside special cases,
    If i is less than or equal to floor value of root n, n is NOT prime,
    If n % i is equal to 0, n is NOT prime (n has divisor other than 1 and n),
    Increment by 2 (skip evens above 2). */
    for (int i = 3; i <= n / i; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;

}

int main()
{

    int userNumber; // To replace n in determinPrime()

    printf("Enter a number to check if it is prime:\n\n> ");
    scanf("%d", &userNumber);

    if (determinePrime(userNumber)) { // If this returned true
        printf("\n%d is prime.\n\n", userNumber); // Print prime
    } else { // If this did NOT return true
        printf("\n%d is NOT prime.\n\n", userNumber); // Print NOT prime
    }

    return 0;

} // End main

