#include<cstdio>
#include<iostream>

using namespace std;


class solution
{
public:
	void swap (int *a , int *b)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}

	void selection_sort(int arr[] , int n)
	{
		for (int i =0;i<n-1;++i)
		{
			for (int j =i+1;j<n;++j)
			{
				if (arr[i] > arr[j])
					swap(&arr[j], &arr[i]);
			}

		}
	}
};


int main()
{
	solution sol;
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i =0;i<n;++i)
		scanf("%d", &arr[i]);

	sol.selection_sort(arr, n);

	for (int i =0;i<n;++i)
		printf("%d\n",arr[i]);
	return 0;
}