#include<stdio.h>
#include<math.h>
#include<time.h>
clock_t start, stop;
double duration;
#define MAXN 100	/*多项式最大项数，即多项式阶数+1*/
double f1(int n, double a[], double x);
double f2(int n, double a[], double x);
#define MAXK 10000		/*试验次数*/

int main() {
	double a[MAXN];	/*存储多项式的系数*/
	for (int i = 0; i < MAXN; i++)
	{
		a[i] = i;
	}

	start = clock();	/* 开始计时 */
	for (int i = 0; i < MAXK; i++)
	{
		f1(MAXN - 1, a, 1.1);
	}
	stop = clock();		/* 停止计时 */
	duration = ((double)(stop - start)) / CLK_TCK;
	printf("ticks1 = %f\n", (double)(stop - start));
	printf("duration1 = %6.2e\n", duration);

	start = clock();	/* 开始计时 */
	for (int i = 0; i < MAXK; i++)
	{
		f2(MAXN - 1, a, 1.1);
	}
	stop = clock();		/* 停止计时 */
	duration = ((double)(stop - start)) / CLK_TCK;
	printf("ticks1 = %f\n", (double)(stop - start));
	printf("duration1 = %6.2e\n", duration);

	return 0;
}

double f1(int n, double a[], double x) {
	//正常写，按照式子
	double p = a[0];
	for (int i = 1; i <= n; i++)
	{
		p += (a[i] * pow(x, i));
	}
	return p;
}

double f2(int n, double a[], double x) {
	//用秦九韶
	double p = a[n];
	for (int i = n; i > 0; i--)
	{
		p = a[i - 1] + x * p;
	}
	return p;
}