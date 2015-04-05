#include<iostream>
#include<string>

using namespace std;

class Solution
{
    public:
    void reverse_string_by_word(string &s)	
    {
    	int len = s.size();
    	string res;
    	int word_boundary_start;
    	int word_boundary_end = len-1;
    	for (int i = len-1;i>=0;--i)
    	{
    		if (s[i] == ' ')
    			{
    				word_boundary_start = word_boundary_end-i+1;
    				string word = s.substr(word_boundary_start,word_boundary_start);
    				res += word;
    			} //means previous i was the start of the word 


    	}

    }
};



int main()
{ 
	Solution sol;
	string s  = "This is Test";
	sol.reverse_string_by_word(s);

	return 0;

}