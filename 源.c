#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void PrintN1(int N);
void PrintN2(int N);

int main() {
	int N;
	scanf("%d", &N);
	printf("Ñ­»·:\n");
	PrintN1(N);
	system("pause");
	printf("µÝ¹é:\n");
	PrintN2(N);
	return 0;
}

void PrintN1(int N) {
	for (int i = 0; i <= N; i++)
	{
		printf("%d\n", i);
	}
}

void PrintN2(int N) {
	if (N) {
		PrintN2(N - 1);
		printf("%d\n", N);
	}
}