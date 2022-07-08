#include <stdio.h>
int main() {
	char s[1000001];
	int alpha[26]={0}, max=0, cmp=0, word;
	scanf("%s", s);
	for (int i = 0; s[i] != NULL; i++) {
		if(s[i]>='a' && s[i] <= 'z')
			alpha[s[i] - 'a']++;
		else if (s[i] >= 'A' && s[i] <= 'Z')alpha[s[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++) {
		if (max < alpha[i]) {
			max = alpha[i];
			cmp = max;
			word = i + 'A';
		}
		else if (cmp == alpha[i])
			word = '?';
	}
	if (word == '?')printf("%c", word);
	else printf("%c", word);
}