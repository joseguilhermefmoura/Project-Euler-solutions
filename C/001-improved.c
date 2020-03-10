#include <stdio.h>

/* ~~github/joseguilhermefmoura
 *
 * [PROBLEM:]
 *
 * 	 If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * 	 Find the sum of all the multiples of 3 or 5 below 1000.
 *
 * [SOLUTION:]
 *
 *   SUM = 233168.
 *
 * [MORE INFORMATION AT:]
 *
 *   https://projecteuler.net/problem=1
 *
 */
const int MAX = 999;
int main() {
	
	printf("SUM = %d.\n", sumOfTheDivisibles(3) + sumOfTheDivisibles(5) - sumOfTheDivisibles(15));
	
	return 0;
}
 // Check 001-improved_PT-BR.pdf on this repo.
int sumOfTheDivisibles (int num) {
	const int MAX_DIVISIBLE = (int) (MAX / num);
	return (int) (num * (MAX_DIVISIBLE * (MAX_DIVISIBLE + 1))) / 2;
}
