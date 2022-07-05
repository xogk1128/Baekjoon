#include <stdio.h>

int main() {
	int A, B, C, sum, k,num[10]={0};
	scanf("%d %d %d", &A, &B, &C);
	sum = A * B * C;
	while (sum > 0) {
		k = sum % 10;
		num[k]++;
		sum /= 10;
	}
	for (int i = 0; i < 10; i++)
		printf("%d\n", num[i]);
}