//tirplet 
#include<iostream>
using namespace std;
void tripletsum(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=1;j<size;j++)
		{
			for(int k=2;k<size;k++)
			{
				if(i+j+k==12)
				{
					cout<<i<<" "<<j<<" "<<k;
				}
			}
		}
	}
}
main()
{
	int arr[5]={1,2,3,4,5};
	tripletsum(arr,5);
}
