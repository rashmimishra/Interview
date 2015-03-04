/* This program is writtten to illustrate the dynamic programming 
approach to find the longest common subsequence. The time complexity 
of this program is O(nm) and space complexity is O(nm) where n is the 
length of one string and m is the length of another string*/

#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int LCS(string s1, string s2)
{
	int n = s1.size();
	int m = s2.size();
	//cout << s1 <<endl;
	//cout << s2 <<endl;
	//printf("%d\n%d\n",n,m);
	int mem[n+1][m+1];
	//base case filling in the mem array.
	for(int j = 0; j<=m;++j)
		mem[0][j] = 0;
	for (int i =0 ; i<=n;++i)
		mem[i][0] = 0;
	for(int i = 1;i<=n;++i)
		{
			for (int j=1;j<=m;++j)
			{
				//printf("%s\n",s1[i-1]);
				//printf("%s\n",s2[j-1]);
				if (s1[i-1] == s2[j-1])
				mem[i][j] = 1+mem[i-1][j-1];
				else

				mem[i][j] = max(mem[i-1][j], mem[i][j-1]);

			}
		}
		return mem[n][m];
	
}


int main()
{
	string s1;
	string s2;
    //s1 = "AGGTAB";
    //s2 = "GXTXAYB";
    cin >> s1;
    cin >> s2;
	int res = 0;
	res= LCS(s1,s2);
	printf("%d\n", res);
	return 0;
}