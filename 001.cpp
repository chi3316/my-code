#include <iostream>
using namespace std ;
int main()
{
	int a;
	cin>>a;
	while(a>10)
	{
		int sum=0;
		while(a!=0)
		{
			sum+=a%10;
			a=a/10;
		}
		a=sum;
    }
	cout<<a<<endl;
}
//输入一个整数，输出该整数各位数字的和
