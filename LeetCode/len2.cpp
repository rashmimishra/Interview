#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) 
    {
        int len = s.size();
        stack<char> ss;
        int length =0;
        vector<int> res;
        bool lastpop = false;

        for (int i =0;i<len;++i)
        {
            if(s[i] == '(')
            {
                if (lastpop && !ss.empty())
                {
                    res.push_back(length);
                    length = 0;
                    while(!ss.empty())
                    {
                        ss.pop();
                    }
                }
                ss.push(s[i]);
                lastpop = false;
              if (ss.empty() && i==len-1)
                return 0;
            }
            else
            {

                if (!ss.empty())
                {
                 length = length+2;
                 ss.pop();
                 lastpop = true;
                }
            }
        }

        res.push_back(length);
        int result = *max_element(res.begin(), res.end());

        return result;
    }
};

int main()
{
    Solution sol;
    string s1 = "()()";
    string s2 = "()(()()";
    string s3 = "()(())";
    string s4 = "(()()";
    int t1 = sol.longestValidParentheses(s1);
    cout<<"first:"<<t1<<endl;
    int t2 = sol.longestValidParentheses(s2);
    cout<<"sec:"<<t2<<endl;
    int t3 = sol.longestValidParentheses(s3);
    cout<<"third:"<<t3<<endl;
    int t4 = sol.longestValidParentheses(s4);
    cout<<"f4:"<<t4<<endl;
    return 0;
}