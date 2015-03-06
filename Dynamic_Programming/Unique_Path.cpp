/* Program to find out the how many unique paths are there in the grid of m*n size
. We will solve this problem using dynamic programing  as this is overlapping 
problem. At (x,y) the solution is sum ((x-1,y)+(x,y-1)). The time complexity of 
this problem is O(m*n) and space complexity is also O(m*n) . */

#include<cstdio>
using namespace std;

int unique_path( int m, int n)
{
	//creating the memory array 
	int mem[m+1][n+1];
	/* base cases . The first row and first column 
	will always be 1.*/
	for (int i =1;i<=m;++i)
		mem[i][1] = 1; //every row first value if 1.
	for (int j =1;j<=n;++j)
		mem[1][j] = 1; // first row all column is 1.

	for (int i=2;i<=m;++i)
	{
		for(int j =2;j<=n;++j)
		{
			mem[i][j] = mem[i-1][j] + mem[i][j-1];

		}
	}
	
	return mem[m][n];

}


int main()
{
	int m,n;
	scanf("%d",&m);
	scanf ("%d",&n);
	int path =0;
	path = unique_path(m,n);
	printf("%d\n", path);
}
