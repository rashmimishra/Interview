/* This program is written to compute factorial of big numbers 
using dynamic programing */

#include<cstdio>
using namespace std;

long long int fact(int n)
{
	//creating the mem array
	long long int mem[n+1];
	//base case 
	mem[1] = 1;
	for (int i =2; i<=n;++i)
	{
		mem[i] = i* mem[i-1];
	}

	return mem[n];
}


int main()
{
	int n;
	scanf("%d", &n);
	long long int res = fact(n);
	printf("%lld\n", res);
	return 0;
}