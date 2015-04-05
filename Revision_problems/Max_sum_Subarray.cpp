#include<cstdio>
#include<iostream>

using namespace std;

class solution
{
public:
	int max(int a, int b)
	{
		return (a>b) ? a:b;
	}
	int max_sum(int A[], int n)
	{
		int max_sum_till_now = A[0];
		int max_sum_final = A[0];

		for (int i =1;i<n;++i)
		{
			int temp_max = max_sum_till_now;
			max_sum_till_now = max(temp_max+A[i], A[i]);
			max_sum_final = max(max_sum_final, max_sum_till_now);
		}

		return max_sum_final;
	}
};


int main()
{
	solution sol;
	int n;
	scanf("%d", &n);
	int A[n];
	for (int i =0;i<n;++i)
	{
		scanf("%d", &A[i]);
	}

	int res = sol.max_sum(A, n);

	cout<<res<<endl;

	return 0;
}