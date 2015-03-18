/* This program is written to find out if strings s2 is rotated 
version of s1 or not. */

#include<iostream>
#include<string>

using namespace std;

class Solution
{
public:
	bool isrotates( string s1, string s2)
	{
        s1 = s1+s1;
        if(s1.find(s2) == -1)
        	return false;

        return true;
	}
};


int main()
{
	Solution sol;
	string s1;
	cin>>s1;
	string s2;
	cin>>s2;

	bool res = sol.isrotates(s1,s2);
	cout<<res<<endl;

	return 0;
    
}