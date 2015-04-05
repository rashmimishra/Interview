#include<cstdio>
#include<iostream>

using namespace std;

class solution
{
public:
	void swap( int *a , int *b)
	{
		int temp = *a;
		*a= *b;
		*b = temp;
	}
	void bubble_sort(int arr[] , int n)
	{
		for (int i =0;i<n;++i)
		{
			for (int j = i+1;j<n;++j)
			{
				if (arr[i] >arr[j])
				{
					swap(&arr[i], &arr[j]);
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
		scanf ("%d", &arr[i]);
	sol.bubble_sort(arr,n);
	for (int i =0;i<n;++i)
		printf("%d\n", arr[i]);
	return 0;

}