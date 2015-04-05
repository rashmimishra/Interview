#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        int len = s.size();
        stack<char> ss;
        int length =0;
        int result = 0;
        vector<int> res;
        bool lastpop = false;

        for (int i =0;i<len;++i)
        {
            if(s[i] == '(')
            {
                ss.push(s[i]);


                //lastpop = false;
              if (ss.empty() && i==len-1)
                return 0;
            }
            else
            {
                if (!ss.empty())
                {
                  if(s[i] == ')' && ss.top() == '(')
                      {
                        length1 = length1+2;
                        length2 = length2+2;
                        if(!ss.empty())
                        ss.pop();
                    }
                    else
                    {
                        if(!ss.empty())
                        {
                          ss.pop();

                        }
                   }

              }
          }

            
        }
           if(!ss.empty())
          {
            result = 
          }        
        return length;
        
    }
};


int main()
{
  Solution sol;
  //string s = "(";
  //string s = "(){";
  string s = "(()";
  //string s = "()(()";
  //string s= "()()";

  int len = sol.longestValidParentheses(s);
  cout <<len<<endl;
  return 0;


}