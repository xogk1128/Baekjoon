#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))

int main() {
	int N, cnt=0;
	int temp;
	scanf("%d", &N);
	int* a;
	a = (int*)malloc(sizeof(int) * N);
	while (N--) {
		scanf("%d", &a[cnt]);
		cnt++;
	}
	for (int i = cnt-1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) SWAP(a[j], a[j + 1], temp);
		}
	}
	for (int i = 0; i < cnt; i++) {
		printf("%d\n", a[i]);
	}
}