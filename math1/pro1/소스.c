#include <stdio.h>
int main() {
	int A, B, C, sum=0, i=0;
	scanf("%d %d %d", &A, &B, &C);
	if (B >= C)printf("-1");
	else printf("%d", A / (C - B) + 1);
}