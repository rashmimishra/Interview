#include<cstdio>
#include<iostream>

using namespace std;


class solution
{
	public:
		int max( int a, int b)
		{
			return (a>b) ? a:b;
		}
		int min(int a, int b)
		{
			return (a<b) ? a:b;
		}

		int max_product (int A[], int n)
		{
			int max_product_till_now = A[0];
			int min_product_till_now = A[0];
			int max_prod = A[0];
			for (int i =1;i<n;++i)
			{
				int temp_max = max_product_till_now;
				int temp_min = min_product_till_now;
				max_product_till_now = max(max(temp_max*A[i], temp_min*A[i]), A[i]);
				min_product_till_now = min(min(temp_min*A[i], temp_max*A[i]), A[i]);
				max_prod = max(max_product_till_now, max_prod);
			}
			return max_prod;
		}

};


int main()
{
	solution sol;
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i =0 ;i<n;++i)
	{
		scanf("%d", &arr[i]);
	}

	int max_p = sol.max_product(arr,n);

	cout<<max_p<<endl;
	return 0;
}