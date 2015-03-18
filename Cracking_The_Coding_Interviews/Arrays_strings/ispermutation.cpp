/* This program is written to find out whether one string is permutation of 
another string or not. The same program can be used to find is one string is 
anagram of other string or not. This solution employs dynamic programming 
approach.The time complexity of this solution is O(n) . We will use normal 
interger array as strings can contain duplicate chracters else we can use bool 
array to save space.*/


#include<iostream>
#include<string>
using namespace std;

class Solution
{
public:
	bool ispermutation(string s1, string s2)
	{
		//checking the length of both the strings
		int l1 = s1.size();
		int l2 = s2.size();
		//if both the string is of not the same length then return straight away. 
		if (l1 != l2) return false;
		// creating a int array of 256 size 
		int *mem = new int[256];
		int temp;
		// now we will iterate through first string and mark the mem array as 1.
		for (int i =0;i<l1;++i)
		{
			temp = s1[i]; //to avoid warning
			mem[temp]++;
		}
		// now iterate through second string and check the mem array
		for (int i =0;i<l2;++i)
		{
			temp = s2[i];
			if(mem[temp] <= 0) 
				return false;
			mem[temp]--;
		}
		return true;

	}

};

int main()
{
	Solution sol;
	string s1;
	string s2;
	cin >> s1;
	cin >> s2;
	bool res = sol.ispermutation(s1,s2);
	cout<<res<<endl;
	return 0;
}


