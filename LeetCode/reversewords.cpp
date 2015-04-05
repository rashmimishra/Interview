#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    void reverseWords(string &s)
     {
     	
     	char *word_begin = NULL;
   		char *temp = s; 
 	
    	while( *temp )
    	{
        if (( word_begin == NULL ) && (*temp != ' ') )
        {
            word_begin=temp;
        }
        if(word_begin && ((*(temp+1) == ' ') || (*(temp+1) == '\0')))
        {
            reverse(word_begin, temp);
            word_begin = NULL;
        }
        temp++;
    } 
    reverse(s, temp-1);
    }
};



int main()
{
	Solution sol;
	string s= "This is test";
	sol.reverseWords(s);
	cout<<s<<endl;
	return 0;


}