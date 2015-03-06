/* This program is to find out the majority element in the array. 
The assumption is that majority element always exists hence not 
checking the n/2 value.*/

#include<cstdio>

using namespace std;

int majority_element(int arr[], int n)
{
	int major_index = 0;
	int count = 1;
	for (int i =1;i<n;++i)
	{
		if(arr[i] == arr[major_index])
			count++;
		else
			count--;
		if(count == 0)
		{
			major_index =i;
			count = 1;
		}
	}

	return arr[major_index];
}


int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i =0;i<n;i++)
		scanf("%d", &arr[i]);
	int elem = majority_element(arr,n);
	printf("%d\n", elem);
	return 0;
}