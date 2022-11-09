#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int fun(int aa[], int N);
int main(void)
{
	int N;
	int aa[10] = { 0 };
	cout << "请输入数组长度N\n";
	cin >> N;
	cout << "请输入N个数字,用空格间隔\n";
	if (N <= 0) cout << "0";
	else
	{
		for (int i = 0; i < N; i++)
			cin >> aa[i];
		cout <<"最大子段和为："<<  fun(aa, N) << "\n\n"  ;
	}
	system("pause");
}


int fun(int aa[], int N)
{
	int max = 0, sum = 0, negetive = 1;
	for (int i = 0; i < N; i++)
	{
		if (aa[i] <= 0)continue;
		else
		{
			negetive = 0;
			sum = 0;
			for (int j = i; j < N; j++)
			{
				sum += aa[j];
				if (max < sum) max = sum;
			}
		}
	}
	if (negetive == 1) return 0;
	else return max;
}