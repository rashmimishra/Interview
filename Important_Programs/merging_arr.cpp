#include<iostream>


using namespace std;


class Solution
{
public:
	void merge(int A[] , int m, int B[], int n)
	{
		int k = m+n-1;
		int i = m-1;
		int j = n-1;
		while (i >=0 && j >= 0)
		{
			if (A[i] > B[j])
				{
					A[k] = A[i];
					i--;
				}
			else
			{
				A[k] = B[j];
				j--;
			}
			 k--;

		}

		while (j >=0)
		{
			A[k] = B[j];
			k--;
			j--;
		}
	}

};


int main()
{
	Solution sol;
	int A[9] = {4,5,6,8,17};
	int B[4] = {1,3,7,10};
	sol.merge(A,5,B,4);
	for (int i =0;i<9;++i)
		cout<<A[i]<<endl;
	return 0;
}

