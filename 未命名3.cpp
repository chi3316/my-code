#include<iostream>
using namespace std;
int main()
{
     int arr[10]={2,0,6,8,4,3,1,9,7,5};
     cout<<"初始数组为：";
     for(int i = 0;i<10;i++)
     cout<<arr[i]<<" ";
     cout<<"\n";
     
     //冒泡算法，升序
     //外循环次数，元素个数减一
     for(int i=0;i<9;i++)
     {
     	//内循环次数为元素总个数-轮数-1
     	for(int j=0;j<10-i-1;j++)
     	{
     		//如果前一位比后一位大，交换位置
     		if(arr[j]>arr[j+1])
     		{
     			int temp = arr[j];
     			arr[j]=arr[j+1];
     			arr[j+1]= temp;
     			
			 }
     		
		 }
	 }
	 //输出新的数组：
	 cout<<"新数组为：";
     for(int i = 0;i<10;i++)
     cout<<arr[i]<<" ";
     cout<<"\n";
     return 0;
}