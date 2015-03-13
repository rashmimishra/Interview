/* To generate prime numbers less than n, we will use sieves of eratosthenes.
This is most effcient method for n less than 10 million. The time complexity 
of this program is O(n) and space complexity of this program is much less than 
O(n) as we are using boolean array.*/

#include<cstdio>
#include<cstring>

void markmultiples(bool arr[], int a, int n)
{
	int num , i=2;
	while((num = i*a)<=n)
	{
		arr[num-1] =1;
		i++;
	}

}

void sieves_of_eratosthenes(int n)
{
	if(n >1)  //first prime number is 2. 
	{
		//creating boolean array with all elements set as 0.
		bool arr[n];
		memset(arr,0,n);

		for (int i =1;i<n;++i)
		{
			if(arr[i] == 0)
				{
					printf("%d ", i+1);
					markmultiples(arr,i+1,n);
				}
		}

	}
}

int main()
{
	int n;
	scanf("%d", &n);
	sieves_of_eratosthenes(n);
	return 0;

}