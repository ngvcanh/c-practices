#include <stdio.h>

/**
 * List all the "odd divisors" of the positive integer n.
 * Only using while loop.
 */
int main() {
	int n;
	
	printf("List all the \"odd divisors\" of the positive integer n\n\n");

	printf("Enter value of n: ");
	scanf_s("%d", &n);

	int i = 1;

	while (i <= n) {
		if (n % i == 0 && i % 2 == 1) {
			printf("%d\t", i);
		}
		++i;
	}

	return 0;
}
