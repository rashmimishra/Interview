/* This program is written to replace all all empty characters with %20.*/

#include<iostream>
#include<string>

using namespace std;

class Solution
{

public:
	void replace( string &str)
	{
		// checking the size of the string
		int len = str.size();
		// now we will find the number of blank spaces in the string
		int count =0;
		for (int i =0;i<len;i++)
		{
			if(str[i] == ' ')
				count++;
		}

		// new size 

		int j = len + 2*count;
		str = str +string(count*2,' ');

		for (int i =len-1;i>=0;--i)
		{
			if(str[i] != ' ')
				str[--j] = str[i];
			else
			{
				str[--j] = '%';
				str[--j] = '2';
				str[--j] = '0';
			}
		}

	}
};


int main()
{
	Solution sol;
	string s1 = "RASHMI MISHRA ";
	sol.replace(s1);
	cout<<s1<<endl;
	return 0;
}