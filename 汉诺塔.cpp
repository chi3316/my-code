#include<iostream>
using namespace std;
void niu(int n,char a,char b,char c)
{
	if(n==1)
	cout<<a<<"->"<<c<<endl;
	else 
	{
	niu(n-1,a,c,b);
	cout<<a<<"->"<<c<<endl;
	niu(n-1,b,a,c);
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