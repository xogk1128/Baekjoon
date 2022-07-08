#include <stdio.h>
#include <string.h>
int main() {
	int cnt=0;
	char s[1000001], *str;
	scanf("%[^\n]s",s);
	str = strtok(s, " ");
	while (str != NULL) {
		cnt++;
		str = strtok(NULL, " ");
	}
	printf("%d", cnt);
}