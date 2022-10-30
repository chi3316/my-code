#include<iostream>
#include<cmath>
using namespace std;
void jing(double d, int j)
{
	int t = 0;
	for (int i = 0; i < 10; i++)
	{
		t = d * j / 1;
		d = fmod((d * j), 1);
		cout << t;
	}
}
int main()
{
	double a, b, d;
	int t = 0;
	cin >> a >> b;
	d = a / b;
	for (int i = 2; i < 10; i++)
	{
		cout << "0.";
		jing(d, i);
		cout << endl;
	}
	
}
