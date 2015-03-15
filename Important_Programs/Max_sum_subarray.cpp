/* This program is written to demonstrate the dynamic programming approach to find the 
maximum sum sub-array. The time complexity of this program is O(n) */

#include<cstdio>

using namespace std;


int max(int a, int b)
{
	return (a>b) ? a : b ; 
}

int max_sum(int *arr, int n)
{
	// initializing the variables.
	int max_sum_so_far = 0, max_ending_here =0;
	for (int i =0 ;i<n;++i)
	{
		max_ending_here = max_ending_here+arr[i];
		if (max_ending_here < 0)
			max_ending_here = 0;
		else if(max_sum_so_far < max_ending_here)
			max_sum_so_far = max_ending_here;
	}

return max_sum_so_far;

}
int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i =0;i<n;++i)
		scanf("%d", &arr[i]);
	int val = max_sum(arr,n);
	printf("%d\n",val);
	return 0;

}


