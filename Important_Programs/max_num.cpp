#include<stdio.h>



int findPeakElement(int num[], int n) {
    if (n==1) return 0;
    else if (n == 1)
    {
        if (num[0] > num[1])
        return 0;
        else
        return 1;
    }
    for (int i=2;i<n;++i)
    {
        if (num[i-1] > num[i-2] && num[i-1] >num[i])
        return i;
        else
        return -1;
    }
    
}


int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i =0;i<n;++i)
    scanf("%d", &arr[i]);

    return 0;
}