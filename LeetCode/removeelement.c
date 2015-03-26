#include<stdio.h>
int remove_element(int arr[], int n, int elem)
{
	int i;
	int j =0;
	int count =0;
	for (i = n-1;i>=0;--i)
	{
		if (arr[i] == elem)
		{
			count++;
			for (j=i;j<n;j++)
			{
				arr[j] = arr[j+1];
			}

		}
	}
	for (i =0 ;i<(n-count);++i)
		printf("%d\n",arr[i]);
return (n-count);
}


int main()
{
	int n,i;
	scanf("%d", &n);
	int arr[n];
	for (i =0;i<n;++i)
		scanf("%d", &arr[i]);

	int val;
	scanf("%d", &val);

	int newlength= remove_element(arr,n,val);
	printf("%d\n",newlength);

	return 0;

}