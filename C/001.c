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

int main() {
	const int MAX = 1000;
	int i, sum = 0;
	
	/* In order to determine if a number is or is not multiple of 3 or 5, we just need to do modulo division
	 * (i.e. to check if is there any remainder after a division) with both of them.
	 */

	for (i = 1; i < MAX; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	
	/* The condition % 3 should come first than the condition % 5, because its more likely that the analyzed
	 * number to be multiple of 3 than to be multiple of 5.
	 * 
	 * Because there are more multiples of 3 than multiples of 5.
	 */
	
	printf("SUM = %d\n", sum);
	
	return 0;
}
