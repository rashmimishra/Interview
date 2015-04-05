#include<stdio.h>

int max( int a, int b)
{
    if (a >b)
    return a;
    else
    return b;
}
int rob(int num[], int n) {
    int mem[n];
    //base cases
    mem[0] = num[0];
    mem[1] = num[1];
    mem[2] = num[0]+num[2];
    
    int i;
    for (i =3;i<n;i++)
    {
        mem[i] = max(mem[i-2],mem[i-3])+num[i];
    }
    for (i =0 ;i<n;++i)
        printf("%d\n", mem[i]);
    
    return max(mem[n-1],mem[n-2]);
}


int main()
{
    int i,n;
    scanf("%d", &n);
    int arr[n];
    for (i =0;i<n;++i)
    {
        scanf("%d", &arr[i]);

    }

    int max_money = rob(arr,n);

    printf("%d\n",max_money);
    return 0;
}