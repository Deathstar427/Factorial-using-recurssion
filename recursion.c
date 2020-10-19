/**
 * @brief Factorial calculation by scanning user input
 * @details
 * The factorialOf function take the number as int
 * return factorial as int after calculation
 * @author [Deathstar427](https://github.com/Deathstar427)
 */
#include <assert.h> // for assert
#include <stdio.h> // for scanf and printf functions

/**
 * @brief Calculate factorial of a number
 * @param n is the number who's factorial needs to be calculated
 * @returns a factorial
 */
int factorialOf(int n) {
    if(n <= 1) {
        return 1;
    }
    return(n * factorialOf(n-1));
}

/**
 * @brief Test function
 * @returns void
 */
static void test() {
    /* test that factorial of 5 is 120 */
    assert(factorialOf(5) == 120);

    /* test that factorial of 9 is 362880 */
    assert(factorialOf(9) == 362880);
}

/**
 * @brief Main function
 * @returns 0 on exit
 */
int main() {
    // execute the tests
    test();

    // get the value of n
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // call the function factorialOf to get the factorial value of n
    int nFactorial = factorialOf(n);
    printf("Factorial of %d is: %d", n, nFactorial);
    return 0;
}
