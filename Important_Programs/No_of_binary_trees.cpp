/* This program is written to find the no of unique binary trees that can be 
formed from n numbers. This problem is based non catalan's number*/
#include<cstdio>
#include<vector>
using namespace std;
class Solution
{
public:
	int max_trees( int n)
	{
		if(n < 0) return 0;
		vector<int> tree_vect(n+1,0);
		//base case 
		tree_vect[0] = 1;
		for (int i =1;i<=n;++i)
		{
			for (int j = 0;j<i;++j)
				tree_vect[i] += tree_vect[j] * tree_vect[i-j-1];
		}

		return tree_vect[n];

	}
};


int main()
{
	Solution sol;
	int n;
	scanf("%d", &n);
	int no_of_trees = sol.max_trees(n);
	printf("%d\n", no_of_trees);
	return 0; 
}