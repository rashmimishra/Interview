/* This program is written to illustrate dynamic programming approach 
to solve LIS problem . The time complexity of this solution is O(n) and
space complexity is O(n). */
#include<cstdio>
using namespace std;


int LIS(int arr[], int n)
{
	// Creating aux array to store the length

	int mem[n+1];
	// base case 
	mem[1] = 1;
	for (int i =1;i<=n;++i)
	{
		if (arr[i] > arr[i-1])
			mem[i+1] = 1+ mem[i];
		else
			mem[i+1] = mem[i];
	}	

	return mem[n];
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i =0; i<n;++i)
		scanf("%d", &arr[i]);
	int length = LIS(arr,n);
	printf("%d\n", length);
}