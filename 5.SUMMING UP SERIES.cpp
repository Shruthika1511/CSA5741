#include<stdio.h>
int main() {
    int i, n, sum = 0;
	printf("Enter no of terms: ");
    scanf("%d", & n);
	sum = (n * (n + 1)) / 2;
	printf("Sum: %d\n", sum);
	return 0;
}
