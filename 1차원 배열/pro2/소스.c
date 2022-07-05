#include <stdio.h>

int main() {
	int num[9], max=0, k;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num[i]);
		if (num[i] > max) {
			max = num[i];
			k = i + 1;
		}
	}
	printf("%d\n%d", max, k);
}