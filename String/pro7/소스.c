#include <stdio.h>
int main() {
	int A, B, a2=0, b2=0;
	scanf("%d %d", &A, &B);
	while (A > 0) {
		a2 *= 10;
		b2 *= 10;
		a2 += A % 10;
		b2 += B % 10;
		A /= 10;
		B /= 10;
	}
	if (a2 > b2)printf("%d", a2);
	else printf("%d", b2);
}