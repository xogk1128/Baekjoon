#include <stdio.h>
int main() {
	int N, cnt = 0;
	char s[101];
	scanf("%d", &N);
	for (int i = 0; i < N;i++) {
		int alpha[26] = { 0 }, tmp = 0;
		scanf("%s", s);
		for (int j = 0; s[j] != NULL; j++) {
			if ((s[0] != NULL && j == 0) || s[j] == s[j - 1]) {
				alpha[s[j] - 'a']++;
				tmp++;
			}
			else if (s[j] != s[j - 1] && alpha[s[j] - 'a'] == 0) {
				alpha[s[j] - 'a']++;
				tmp++;
			}
			else if (s[j] != s[j - 1] && alpha[s[j] - 'a'] != 0) {
				tmp = 0;
				break;
			}
			else tmp=0;
		}
		if (tmp != 0)cnt++;
	}
	printf("%d", cnt);
}