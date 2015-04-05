#include<cstdio>
#include<iostream>

using namespace std;

class solution 
{
public:
	void swap (int* a, int* b)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}

	void insertion_sort(int arr[] , int n)
	{
		for (int i =1 ;i<n;++i)
		{
			for (int j =0;j<i;++j)
			{
				if (arr[j]>arr[i])
				{
					swap(&arr[j],&arr[i]);
				}
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

	sol.insertion_sort(arr,n);
	for (int i =0;i<n;++i)
		printf("%d\n",arr[i]);

	return 0;
}