/* This program is written to illustrate merging of two sorted arrays*/


#include<cstdio>

using namespace std;

void merge(int arr1[], int n, int arr2[], int m)
{
	int i,j,k;
	int temp[n];
	for (int i =0;i<n;i++)
		temp[i] = arr1[i];
	i =j =k =0;
	while (i<n && j<m)
	{
		if(temp[i] <= arr2[j])
		{
			arr1[k] = temp[i];
			i++;
		}
		else
		{
			arr1[k] = arr2[j];
			j++;
		}
		k++;
	}

	while (i<n)
	{
		arr1[k] = temp[i];
		i++;
		k++;
	}
	while (j<m)
	{
		arr1[k] = arr2[j];
		j++;
		k++;
	}
}


int main ()
{
	int arr1 [9] = {1,2,3,4,5};
	int arr2 [4]= {2,4,6,8};
	merge(arr1,5,arr2,4);
	for (int i =0 ;i<9;i++)
	{
		printf("%d\n", arr1[i]);
	}
	return 0;
}