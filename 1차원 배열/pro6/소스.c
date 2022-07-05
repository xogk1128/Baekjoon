#include <stdio.h>
#include <string.h>
int main() {
	int N, cnt, sum;
	char test[80];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", test);
		cnt = 1;
		sum = 0;
		for (int j = 0; j < strlen(test); j++) {
			if (test[j] == 'O') {
				sum += cnt;
				cnt++;
			}
			if (test[j] == 'X')cnt = 1;
		}
		printf("%d\n", sum);
	}
}