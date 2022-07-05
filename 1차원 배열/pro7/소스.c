#include <stdio.h>
int main() {
	int C, N, cnt;
	float aver, sum;
	scanf("%d", &C);
	for (int i = 0; i < C; i++) {
		scanf("%d", &N);
		float score[1000] = { 0 };
		sum = 0;
		cnt = 0;
		for (int j = 0; j < N; j++) {
			scanf("%f", &score[j]);
			sum += score[j];
		}
		aver = sum / N;
		for (int k = 0; k < N; k++)
			if (score[k] > aver)cnt++;
		sum = (float)cnt / N * 100;
		printf("%.3f\n", sum);
	}
}