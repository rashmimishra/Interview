#include<stdio.h>



int findPeakElement(int num[], int n) 
{
    int i;
    int result = 0;
    if (n==1) return result;
    else if (n == 2)
    {
        if (num[0] > num[1])
        result = 0;
        else
        result = 1;
    }
    for (i=1;i<n;++i)
    {
        if (i ==1 && num[i-1] > num[i]) result = i-1;
        if (num[i] > num[i-1] && num[i] >num[i+1])
        result = i;
        if (i == n-1 && num[i] > num[i-1])
            result = i;

    }
    return result;    
}


int main()
{
    int n;
    unsigned int i;
    scanf("%d", &n);
    int arr[n];

    for (i =0;i<n;++i)
        scanf("%d", &arr[i]);
    int index = findPeakElement(arr,n);
    printf("%d\n", index);
    return 0;
}