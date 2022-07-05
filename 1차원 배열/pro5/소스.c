#include <stdio.h>

int main() {
	int N;
	float score[1000], result=0, max = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%f", &score[i]);
		if (max < score[i])max = score[i];
	}
	for (int i = 0; i < N; i++) {
		score[i] = score[i] / max * 100;
		result += score[i];
	}
	printf("%f", result / N);
}