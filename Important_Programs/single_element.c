#include<stdio>

int single_number(int arr[], int n)
{
	int XOR = arr[0];
	for (int i =1;i<n;++i)
   		XOR ^=  arr[i];

   return XOR;
}


int main()
{
	int i,n;
	scanf("%d", &n);
	for (i =0;i<n;++i)
		scanf("%d", &arr[i]);

	int num = single_number(arr,n);
	printf("%d\n", num);
	return 0;
}