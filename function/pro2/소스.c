#include <stdio.h>
int calc(int n) {
	int sum = n;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	int self[10001]={0}, right;
	for (int i = 1; i <= 10000; i++) {
		right = calc(i);
		if (right < 10001)self[right] = 1;
	}
	for (int i = 1; i <= 10000; i++) {
		if (self[i] == 0)printf("%d\n", i);
	}
}