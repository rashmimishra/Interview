#include<cstdio>
#include<iostream>
#include<string>

using namespace std;

class solutions 
{
	public:
	int max( int a, int b)
	{
	return (a>b)? a:b;
	}	

	int LCS(string s1 , string s2)
	{
		int l1 = s1.size();
		int l2 = s2.size();

		int mem[l1-1][l2-1];

		// base cases 
		for (int i =0;i<l1;++i)
		{
			mem[i][0] = 0;
		}
		for (int j =0;j<l2;++j)
		{
			mem[0][j] =0;
		}

		for (int i =1 ;i<l1;++i)
		{
			for (int j =1;j<l2;++j)
			{
				if(s1[i-1] == s2[j-1])
				{
					mem[i][j] = mem[i-1][j-1]+1;
				}
				else
				mem[i][j] = max(mem[i-1][j], mem[i][j-1]);
			}

		}
		return mem[l1-1][l2-1];
	}
};


int main()
{
	solutions sol;
	string s1 = "AGGTAB";
	string s2 = "GXTXAYB";
	int lcs = sol.LCS(s1,s2);
	cout<<lcs<<endl;
	return 0;
}