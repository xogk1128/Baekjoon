#include <stdio.h>
int main() {
	int N, sum = 0;
	char c[101];
	scanf("%d", &N);
	scanf("%s", c);
	for (int i = 0; i < N; i++)
		sum += (c[i] - '0');
	printf("%d", sum);
}