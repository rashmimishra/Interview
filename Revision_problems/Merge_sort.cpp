#include<cstdio>
#include<iostream>

using namespace std;

class Solution
{
	public:
	void merge(int arr[] , int low, int mid, int high)
	{
		int left = mid-low+1;
		int right = high-mid;

		//ccreating left and right sub arrays

		int left_a[left];
		int right_a[right];

		for (int i =0;i<left;++i)
		{
			left_a[i] = arr[low+i];
		}

		for (int j =0; j<right;++j)
		{
			right_a[j] = arr[mid+1+j];
		}

		int i = 0;
		int j = 0;
		int k = low;
		while (i <left && j<right)
		{
			if(left_a[i] <=right_a[j])
			{
				arr[k] = left_a[i];
				++i;
			}
			else
			{
				arr[k] = right_a[j];
				++j;

			}
			++k;
		}

		while (i<left)
		{
			arr[k] = left_a[i];
			++i;
			++k;
		}

		while (j<right)
		{
			arr[k] = right_a[j];
			++j;
			++k;
		}
	}	

	void merge_sort(int arr[], int low, int high)
	{
		int mid;
		if (low<high)
		{
			mid = low+(high-low)/2;
			merge_sort(arr,low, mid);
			merge_sort(arr,mid+1,high);
			merge(arr,low,mid,high);
		}
	}
};



int main()
{
	Solution sol;
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i =0; i<n;++i)
		scanf("%d", &arr[i]);
	sol.merge_sort(arr,0,n-1);

	for (int i =0;i<n;++i)
		printf("%d\n", arr[i]);

	return 0;
}
