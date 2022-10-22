#include <iostream>
using namespace std;
int main()
{
	int n,i,j,n_u,n_l;
	cout << "输入行数一个奇数：";
	cin >> n;
	n_u=n/2+1;//上半部分行数
	n_l=n/2;//下半部分行数 
	for(i=1; i<=n_u; i++)//上半部分 
	{
		for(j=1; j<=n_u-i; j++)//"n_u-i"当前行第一个星号左边的空格数//
			cout << ' ';
		for(j=1; j<=2*i-1; j++)//"2*i-1"为当前行的星号数// 
			cout << '*';
		cout << endl;//换行//
	}
	for(i=n_l; i>=1; i--)//下半部分
	{
		for(j=1; j<=n_l-i+1; j++)//"n_l-i"当前行第一个星号左边的空格数// 
			cout << ' ';
		for(j=1; j<=2*i-1; j++)//"2*i-1"为当前行的星号数// 
			cout << '*';
		cout << endl;//换行//
	}
}
