#include<iostream>
using namespace std;
int fun(int *a,int N)
{
     int max=0;
     int flag=0;
     for (int i=0;i<N;i++)
     {
        if(a[i]+flag>0)
            flag=a[i]+flag;
        else 
            flag=0;
        if(flag>max)
            max=flag;
     }
     return max;
}
int main()
{   
    int N; 
    cout<<"请输入N\n";
    cin>>N;
    int *a=new int [N];
    cout<<"请输入N个数字,用空格间隔\n";
    for(int i=0;i<N;i++)
        cin>>a[i];
    for(int i=0;i<N;i++)
        cout<<a[i]<<endl;
       cout<<"\n\n"<<endl;

    cout<<"最大子段和为："<<fun(a,N)<<endl;
 } 