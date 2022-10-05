#include <stdio.h>
int calc(int N) {
	int r1, r2, r3, cnt = 99;
	if (N < 100)printf("%d", N);
	else {
		for (int i = 100; i <= N; i++) {
			r1 = i / 100;
			r2 = (i / 10) % 10;
			r3 = i % 10;
			if ((r1 - r2) == (r2 - r3))cnt++;
		}
		printf("%d", cnt);
	}
}

int main() {
	int N;
	scanf("%d", &N);
	calc(N);
}