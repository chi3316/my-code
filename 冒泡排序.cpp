#include<iostream>
using namespace std;

void swap(int &a,int &b)//需要将实参的值交换（改变），用引用传递
{
	int temp = a;
	a = b;
	b = temp;
}

void bubble_sort(int arr[],int size)//参数要加上数据类型
{
	
	for(int i=0;i<size-1;i++)
	{
		int work = 0;//用work记录，work==1表示进行了交换，work==0表示不需要交换，直接退出
		for(int j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
		  {
		  	swap(arr[j],arr[j+1]);
		  	work =1;
		  }
		}
		if(work==0) break;
	}
}

int main()
{
	const int size = 10;
	int arr[size]={3,6,8,9,2,1,0,7,5,4};
	
	bubble_sort(arr,size);//数组的函数调用直接写数组名
	for(int i=0;i<10;i++)
	cout<<arr[i]<<" ";
}
