/* This program is written to find out the maximum product sub array from a 
given array of integers. We need to employ dynamic programming approach to 
solve this problem. The time complexity of this program is O(n). */

#include<cstdio>
using namespace std;

int min( int a, int b)
{
	return a < b ? a:b;
}

int max(int a, int b)
{
	return  a > b ? a:b;
}

int max_product_sub_array(int *arr, int n)
{
	int max_ending = arr[0];
	int min_ending = arr[0];
	int max_product = arr[0];
	for (int i =1;i<n;++i)
	{
		int tmpmax = max_ending;
		int tmpmin = min_ending;
		max_ending = max(max(tmpmax*arr[i], tmpmin*arr[i]), arr[i]);
		min_ending = min(min(tmpmax*arr[i], tmpmin*arr[i]), arr[i]);
		max_product = max(max_product,max_ending);

	}

return max_product;

}


int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i =0;i<n;++i)
		scanf("%d", &arr[i]);
	int max_product = max_product_sub_array(arr,n);
	printf("%d\n",max_product);
	return 0;
}