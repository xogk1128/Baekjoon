#include <stdio.h>
int main() {
	int N, a, max=-1000000, min=1000000;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &a);
		if (max < a)max = a;
		if (min > a)min = a;
	}
	printf("%d %d", min, max);
}