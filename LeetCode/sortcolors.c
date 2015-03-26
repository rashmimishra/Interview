/* This code is written to sort the colors which are represented by numbers */
#include<stdio.h>
void sortcolors(int arr[] , int n)
{
	int temp[3];
	int i;
	for (i =0;i<3;i++)
		temp[i] =0;
	for (i =0; i<n;++i)
	{
		if (arr[i] ==0)
			temp[0]++;
		else if (arr[i] ==1)
			temp[1]++;
		else
			temp[2]++;
	}

	printf("%d\n%d\n%d\n",temp[0],temp[1],temp[2]);

	for (int i =0;i<temp[0];++i)
	{
		arr[i] = 0;

	}
	int loc = temp[0]+temp[1];
	for (int i=temp[0];i<loc;++i)
	{
		arr[i] =1;
	}
	for (int i = loc;i<n;++i)
	{
		arr[i] =2;
	}
}


int main()
{
	int i,n;
	scanf("%d", &n);
	int arr[n];
	for (i =0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	sortcolors(arr,n);
	for (i =0;i<n;++i)
		printf("%d\n",arr[i]);

	return 0;
}