#include<iostream>
#include<cstdio>

using namespace std;

class solution
{
  public:
  void merge_arrays(int A[] , int m, int B[], int n)
  {
  	int i = m-1;
  	int j = n-1;
  	int k = m+n-1;
  	while(i >=0 && j >=0)
  	{
  		if (A[i] > B[j])
  		{
  			A[k] = A[i];
  			k--;
  			i--;
  		}
  		else
  		{
  			A[k] = B[j];
  			k--;
  			j--;
  		}
  	}

  	while (j>=0)
  	{
  		A[k] = B[j];
  		k--;
  		j--;
  	}

  }

};


int main()
{
	solution sol;
    int A[9] = {6,8,10,15,20};
    int B[4] = {2,7,12,22};
	sol.merge_arrays(A,5,B,4);
	for (int i =0;i<9;++i)
		cout<<A[i]<< " ";
	cout<<endl;
	return 0;
}
 