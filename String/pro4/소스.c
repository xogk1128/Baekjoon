#include <stdio.h>
int main() {
	int T, R;
	char S[21];
	scanf("%d", &T);
	while (T--) {
		scanf("%d %s", &R, S);
		for (int i = 0; S[i] != NULL; i++) {
			for (int j = 0; j < R; j++)
				printf("%c", S[i]);
		}
		printf("\n");
	}
}