/* largest elements in the array */
#include<stdio.h>
void main()
{
	int arr[10]={10,90,20,180,30,2,36,40,50,26};
	int i,large=0;
	for(i=1;i<11;i++)
	{
		if(arr[i]>large)
		{
			large=arr[i];
		}
		
	}printf("%d\n",large);
	
}
