/* This prgram is written to illustrate how to rotate an array to the right by 
K places. The approach to solve this problem is to problem is to left rotate an
array by n-k times. */

#include<cstdio>

using namespace std;

void left_rotate_by_one(int arr[], int n)
{
	int temp = arr[0];
	for (int i = 0;i<n-1;++i)
		arr[i] = arr[i+1];
	arr[n-1] = temp;
}

void left_rotate(int arr[], int k, int n)
{
  for (int i =0;i<k;++i)
  {
  	left_rotate_by_one(arr,n);
  }

}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i =0;i<n;++i)
		scanf("%d",&arr[i]);
	int val;
	scanf("%d", &val);
	int rotate_by = n-val;
	left_rotate(arr, rotate_by, n);

	/*for (int i =0; i<n;++i)
		printf("%d\n", arr[i]);*/

return 0;
}

