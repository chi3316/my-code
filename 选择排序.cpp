#include<iostream>
using namespace std;
void  swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

/*void selection_sort(int a[], int len) 
{
    int i,j;

	for (i = 0 ; i < len - 1 ; i++) 
  {
		int min = i;
		for (j = i+1; j < len; j++)    
		{
			if (a[j] < a[min])  
			{
				min = j; 
			}
			if（min!=i)
	    {
		swap(a[min], a[i]);
		  }
		}
	}
}*/ //这里有个致命bug,我把判断min!=i,交换写在了第二个循环里面！
 void selection_sort(int a[], int len) 
{
    int i,j;

	for (i = 0 ; i < len - 1 ; i++) 
    {
		int min = i;
		for (j = i + 1; j < len; j++)    
		{
			if (a[j] < a[min])  
			{
				min = j; 
			}
		}
		if(min != i)
		{
		  swap(a[min], a[i]);
		}
	}   
}

int main()
{
	const int len = 6;
	int arr[len]={2,4,1,3,0,5};
	selection_sort(arr,len);
	for(int i = 0;i<len;i++)
	cout<<arr[i]<<" ";
}
