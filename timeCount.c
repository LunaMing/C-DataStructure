#include<stdio.h>
#include<time.h>
void MyFunction();
clock_t start, stop;
/* clock_t��clock()�������صı������� */
double duration;
/* ��¼���⺯������ʱ�䣬����Ϊ��λ */
int main() {
	int N = 10000;
	/* ���ڲ��Է�Χ�ڵ�׼������д��clock()����֮ǰ*/
	start = clock();	/* ��ʼ��ʱ */
	MyFunction(N);		/* �ѱ��⺯���������� */
	stop = clock();		/* ֹͣ��ʱ */
	duration = ((double)(stop - start)) / CLK_TCK;
	/* ��������ʱ�� */
	/* �������ڲ��Է�Χ�Ĵ���д�ں��棬�������duration��ֵ */
	printf("%d", duration);
	return 0;
}
void MyFunction(int N) {
	double j = 0;
	//���дд
	for (int i = 0; i < N; i++)
	{
		for (int k = 0; k < N; k++)
		{
			j++;
		}
	}
}