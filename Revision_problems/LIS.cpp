#include<cstdio>
#include<iostream>

using namespace std;

class solutions
{
public:
int LIS(int arr[] , int n)
{
	//creating mem array
	int mem[n];
	mem[0] = 1;
	for (int i =1;i<=n;++i)
	{
		if (arr[i] > arr[i-1] && )
		{
		mem[i] = 1+mem[i-1];
		}
		else
		mem[i] = mem[i-1];
	}
	return mem[n-1];
	}	
};


int main()
{
	solutions sol;
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i =0;i<n;++i)
	{
	scanf("%d", &arr[i]);
	}

	int res = sol.LIS(arr,n);

	cout<<res<<endl;
	return 0;
}