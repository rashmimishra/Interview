/* This program is written for removing all the occurance of a given element 
in an array and return the new length of the array. */
#include<cstdio>
#include<algorithm>

using namespace std;

int first_index(int arr[] , int low, int high, int elem, int n)
{
	int mid;
	while (high>=low)
	{
		mid = low+(high-low)/2;
		if((mid == 0 || elem > arr[mid-1] ) && arr[mid] == elem)
			return mid;
		else if (elem > arr[mid] )
			return first_index(arr,(mid+1),high,elem,n);
		else
			return first_index(arr,low,(mid-1),elem,n);
	}
	return -1;
} 

int last_index(int arr[], int low, int high, int elem, int n)
{
	int mid;
	while(high>=low)
	{
		mid = low+(high-low)/2;
		if((mid == n-1 || elem < arr[mid+1] ) && arr[mid] == elem)
			return mid;
		else if (elem < arr[mid])
			return last_index(arr,low,mid-1,elem,n);
		else
			return last_index(arr,mid+1,high,elem,n);
	}
	return -1;

}

int count(int arr[], int n, int elem)
{
	int i,j;
	i = first_index(arr,0,n-1,elem,n);
	j = last_index(arr,0,n-1,elem,n);
	int elem_count = j-i+1;
	for (int k = i;k<elem_count;++k)
	{
		arr[k]= arr[k+elem_count];
	}
	int new_length = n-elem_count;
	return new_length;
}

int main()
{
	int n,elem;
	scanf("%d", &n);
	int arr[n];
	for (int i =0;i<n;i++)
		scanf("%d", &arr[i]);
	sort(arr,arr+n);
	scanf("%d", &elem);
	int new_length = count (arr,n,elem);
	printf("%d\n", new_length);
	for (int i =0;i<new_length;++i)
		printf("%d\n", arr[i]);
	return 0;
}