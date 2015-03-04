/* This program is written to illustrate Dynamic programming approach
compute the fibbonaci number. The time complexity of this program is 
O(n) and space complexity is O(n) */

#include<cstdio>
using namespace std;

int fib( int n)
{
	int mem[n+1];
	/* fib1 and fib2 values are 1 hence intializing 
      it to 1 */
	mem[1] = mem[2] = 1;
	for(int i =3;i<=n;++i)
	{
		mem[i] = mem[i-1]+mem [i-2];
	}
	return mem[n];
} 



int main()
{
	int n;
	scanf("%d",&n);
	int val = fib(n);
	printf ("%d\n", val);
	return 0;
}