#include <stdio.h>
int main() {
	char s[101];
	int cnt = 0;
	scanf("%s", s);
	for (int i = 0; s[i] != NULL; i++) {
		if (s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-')) {
				cnt++; 
				i++;
		}
		else if (s[i] == 'd') {
			if (s[i + 1] == 'z' && s[i + 2] == '=') {
				cnt++;
				i += 2;
			}
			else if (s[i + 1] == '-') {
				cnt++;
				i++;
			}
			else cnt++;
		}
		else if (s[i] == 'l' && s[i + 1] == 'j') {
			cnt++;
			i++;
		}
		else if (s[i] == 'n' && s[i + 1] == 'j') {
			cnt++;
			i++;
		}
		else if (s[i] == 's' && s[i + 1] == '=') {
			cnt++;
			i++;
		}
		else if (s[i] == 'z' && s[i + 1] == '=') {
			cnt++;
			i++;
		}
		else cnt++;
	}
	printf("%d", cnt);
}