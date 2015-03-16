/* This program is written to find out the maximum product sub array from a 
given array of integers. We need to employ dynamic programming approach to 
solve this problem. The time complexity of this program is O(n). This program 
will not work if all the elements in array is 0. Return 0 incase all the elements 
are 0 else call max_product_sub_array function.*/

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
	int max_ending = 1;
	int min_ending = 1;
	int max_product = 1;
	for (int i=0;i<n;++i)
	 	{
	 		if (arr[i] > 0)
	 		{
	 			max_ending = max_ending * arr[i];
	 			min_ending = min(min_ending * arr[i], 1);
	 		}
	 		else if (arr[i] == 0)
	 		{
	 			max_ending = 1;
	 			min_ending = 1;
	 		}
	 		else
	 		{
	 			int temp = max_ending;
	 			max_ending = max(min_ending *arr[i], 1);
	 			min_ending = temp * arr[i];
	 		}
	 		if (max_product < max_ending)
	 			max_product = max_ending;
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