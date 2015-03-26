#include<iostream>
#include<string>
#include<stack>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.size();
        cout<<len<<endl;
        stack<char> mystack;
        for (int i = 0;i<len;++i)
        {
            if(isalnum(s[i]))
            {
                mystack.push(s[i]);
            }
        }

        int s_size = mystack.size();
        for (int i =0;i<s_size;++i)
        {
            cout<<mystack.top()<<endl;
            mystack.pop();
        }
        
        for (int i=0;i<len;++i)
        {
            cout<<s[i]<<endl;
            if(isalnum(s[i]) && !(mystack.empty()))
            {
                //cout<<s[i]<<endl;

                if(s[i] != mystack.top())
                return false;
                mystack.pop();
            }
            
        }
        return true;
    }
};



int main()
{
    Solution sol;
    string s = "a.";

    bool result = sol.isPalindrome(s);

    cout<<result<<endl;
    return 0;
}