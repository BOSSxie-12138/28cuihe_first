#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int fun(int aa[], int N);
int main(void)
{
	int N;
	int aa[10] = { 0 };
	cout << "���������鳤��N\n";
	cin >> N;
	cout << "������N������,�ÿո���\n";
	if (N <= 0) cout << "0";
	else
	{
		for (int i = 0; i < N; i++)
			cin >> aa[i];
		cout <<"����Ӷκ�Ϊ��"<<  fun(aa, N) << "\n\n"  ;
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