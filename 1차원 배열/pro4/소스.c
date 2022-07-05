#include <stdio.h>

int main() {
	int cnt, num[10], result = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		num[i] %= 42;
	}
	for (int i = 0; i < 10; i++) {
		cnt = 0;
		for (int j = i + 1; j < 10; j++) {
			if (num[i] == num[j])cnt++;
		}
		if (cnt == 0)result++;
	}
	printf("%d", result);
}