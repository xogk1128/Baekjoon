#include <stdio.h>
int main() {
	int alpha[26], i;
	char S[101];
	scanf("%s", S);
	for (i = 0; i < 26; i++)
		alpha[i] = -1;
	for (i = 0; S[i] != NULL; i++) {
		if(alpha[S[i] - 'a'] == -1)
			alpha[S[i] - 'a'] = i;
	}
	for (i = 0; i < 26; i++)
		printf("%d ", alpha[i]);
}