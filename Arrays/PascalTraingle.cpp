/* program for printing Pascal's triangle. This time complexity for this program 
is O(n2) and space complexity of this program is also O(n2). */


#include<cstdio>
#include<cstdlib>

using namespace std;

void Pascal_Traig(int n)
{
	//creating aux 2d array to hold the traiangle

	int mem[n][n];
	for (int i =0 ;i<n;++i)
	{
		for(int j=0;j<=i;++j)
		{
			//first and last values in each row is 1. base case
			if (j==0 || i ==j)
				mem[i][j]=1;
			else
				mem[i][j] = mem[i-1][j-1]+mem[i-1][j];
			printf("%d",mem[i][j]);
		}
		printf("\n");
	}
}


int main()
{
	int n;
	scanf("%d", &n);
	Pascal_Traig(n);
	return 0;
}