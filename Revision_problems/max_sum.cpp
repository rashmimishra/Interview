#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

class solution
{
  public:
  int maximize_sum(int arr[] , int n)
  {
  	//creating memory array
  	if (n==1) return arr[0];
  	if (n==2) return arr[1];
  	if (n==3) return arr[0]+arr[2];
  	int mem[n-1];
  	//base cases
  	mem[0] = arr[0];
  	mem[1] = arr[1];
  	mem[2] = arr[2]+arr[0];
  	for( int i =3; i<n;++i)
  	{
  	   mem[i] = max(mem[i-2], mem[i-3]) + arr[i];
  	}

  	sort(mem, mem+n);
  	return mem[n-1];

  }

};


int main()
{
	solution sol;
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0;i<n;++i)
		scanf("%d",&arr[i]);

	int result = sol.maximize_sum(arr,n);
	cout<<result<<endl;
	return 0;
}
 