#include<stdio.h>
#include<time.h>
void MyFunction();
clock_t start, stop;
/* clock_t是clock()函数返回的变量类型 */
double duration;
/* 记录被测函数运行时间，以秒为单位 */
int main() {
	int N = 10000;
	/* 不在测试范围内的准备工作写在clock()调用之前*/
	start = clock();	/* 开始计时 */
	MyFunction(N);		/* 把被测函数加在这里 */
	stop = clock();		/* 停止计时 */
	duration = ((double)(stop - start)) / CLK_TCK;
	/* 计算运行时间 */
	/* 其他不在测试范围的处理写在后面，例如输出duration的值 */
	printf("%d", duration);
	return 0;
}
void MyFunction(int N) {
	double j = 0;
	//随便写写
	for (int i = 0; i < N; i++)
	{
		for (int k = 0; k < N; k++)
		{
			j++;
		}
	}
}