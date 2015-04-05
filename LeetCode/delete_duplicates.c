#include<stdio.h>
#include<stdlib.h>
int delete_duplicates(int arr[], int n)
{
	int i=1;
	int j;
	if(n == 0 || n==1) return n;
	for (j =1;j<n;++j)	
		{
			if ((arr[j] == arr[j-1]) || (arr[j+1] != arr[j]))
			{
				arr[i] = arr[j];
				i++;

			}
			
		}
		if (i<n)
			arr[i] = '\0';
		int m;
		/*for (m=0;m<n;++m)
			printf("%d\n",arr[m]);*/
return i;
}


int main()
{
	int n,i;
	scanf("%d", &n);
	int arr[n];
	for (i =0;i<n;++i)
		scanf("%d", &arr[i]);
	int newlength= delete_duplicates(arr,n);
	printf("new length:%d\n",newlength);

	return 0;

}