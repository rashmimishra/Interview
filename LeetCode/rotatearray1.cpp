#include<iostream>
#include<cstdio>
using namespace std;

class Solution {
public:
    void rotate(int nums[], int n, int k) 
    {
        if (k==0) return;
        int i =0;
         while(i<=n-k)
        {
            int temp = nums[i];
            nums[i] = nums[n-i-k];
            nums[n-i-k] = temp;
            i++;
            
        }
        
        
    }
};


int main()
{
    Solution sol;
    int n,k;
    scanf("%d", &n);
    int arr[n];
    for (int i =0;i<n;++i)
        scanf("%d",&arr[i]);
    scanf("%d", &k);

    sol.rotate(arr,n,k);
    for (int i =0;i<n;++i)
        printf("%d ",arr[i] );
    return 0;
}