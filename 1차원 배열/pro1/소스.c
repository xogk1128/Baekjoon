#include <stdio.h>

int main() {
	int i, max, min, num;
	int a[10001];
	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		scanf("%d", &a[i]);
	}
	max = a[0];
	min = a[0];
	for (i = 1; i < num; i++) {
		if (max < a[i])max = a[i];
		if (min > a[i])min = a[i];
	}
	printf("%d %d", max, min);
}