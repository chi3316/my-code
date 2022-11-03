#include<iostream>
using namespace std;
void niu(int n,char a,char b,char c)
{
	if(n==1)
	cout<<a<<"->"<<c<<endl;
	else 
	{
	niu(n-1,a,c,b);//把n-1块圆盘从a借助c移到b
	cout<<a<<"->"<<c<<endl;//然后把a移到c
	niu(n-1,b,a,c);//再把n-1块圆盘从b借助a移到b
	}
}
int main()
{
	int n;
	cin>>n;
	char a='A';
	char b='B';
	char c='C';
	niu(n,a,b,c);
	return 0;
}
