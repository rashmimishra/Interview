
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int len = digits.size();
        vector<int> res;
        reverse(digits.begin(),digits.end());
         vector<int>::iterator it;
        for (it= digits.begin();it!=digits.end();++it)
        {
            cout<<*it<<endl;
        }
        if (len ==0)
        {
            res.push_back(1);
            return res;
        }
        int carry;
        int sum;
        //vector<int>::iterator it;
        sum = digits[0]+1;
        cout<<sum<<"sum:"<<endl;
        carry = sum/10;
        sum = sum%10;
        cout<<sum<<"sum1:"<<endl;
        res.push_back(sum);
        cout<<carry<<"carry:"<<endl;
        for (it= digits.begin()+1;it!=digits.end();++it)
        {
            sum= carry+*it;
            carry = sum/10;
            sum = sum%10;
            res.push_back(sum);
        }
        
        if (carry >0)
        res.push_back(carry);
        reverse(res.begin(), res.end());
        
        return res;
        
    }
};



int main()
{
    Solution sol;
    vector<int> myvec;
    int n;
    cin>>n;
    int d;
    for (int i=0;i<n;++i)
    {
        cin>> d;
        myvec.push_back(d);
    }

    vector<int> res = sol.plusOne(myvec);
    int len = res.size();
    for (int i =0;i<len;++i)
    cout<<res[i]<< " ";
    return 0;
}