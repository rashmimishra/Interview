#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
int max(int a, int b)
{
    if (a>b)
        return a;
    else
        return b;
}

bool canJump(int A[], int n) 
{
        
        if (n == 0||n==1) return true;
        if (A[0] == 0 && n>1) return false;
        int mem[n];
        mem[0] = A[0];
        for (int i =1;i<n;++i)
        {
            mem[i] = max(A[i], (mem[i-1]-1));
            //cout<<mem[1]<<"mem1"<<endl;
            if (mem[i] == 0 && i != n-1)
            {
                //cout<<mem[i]<<"mem"<<endl;
                //cout<<i<<endl;
                return false;
            }
        }
        return true;     
    }
};


int main()
{
    Solution sol;
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i =0;i<n;++i)
    scanf("%d", &arr[i]);

    bool jump = sol.canJump(arr,n);
    cout<<jump<<endl;

    return 0;
}