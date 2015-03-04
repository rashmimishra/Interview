/* This program is written to illustrate merge sort for an interger array. The idea behind
merge sort is to keep dividing the array into subarrays till we are left with subarrays with 
one element as single element is always sorted and then merge it in the correct order. The time 
complexity for merge sort is O(nlogn) and space complexity is O(n). Merge sort is a stable sort. */

#include<cstdio>
#include<cstdlib>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
	int i,j,k;
	int left = mid-low+1;
	int right = high-mid;
	//Creating temp arrays for left and right
    int left_arr[left];
    int right_arr[right];
    /* Copying the elements into left and right 
    sub arrays so that merged elements can be put
    back into original array. */
    for (i =0;i<left;i++)
    {
    	left_arr[i] = arr[low+i];
    } 

    for (j =0;j<right;j++)
	 {
		right_arr[j] = arr[mid+1+j];
	 }

	//Start merging.

	i=0;
  j=0; 
  k=low;

   while (i <left && j<right)
   {
     //Equal is required to make it stable sort.
      if(left_arr[i] <= right_arr[j])
      {
      	arr[k] = left_arr[i];
      	i++;
      }	
      else
      {
      	arr[k] = right_arr[j];
      	j++;
      }
      k++;
   }

   /* Both these blocks will be execute if one of the these arrays 
    are over so we just need to copy the other array to original array
    as individual arrays are already sorted.*/

   //Right array is over so just copy the left array.
    while (i < left)
    {
    	arr[k] = left_arr[i];
    	i++;
    	k++;
    }

   //Left array is over so just copy the right array.
    while (j<right)
    {
    	arr[k] = right_arr[j];
    	j++;
    	k++;
    }
}



void merge_sort(int arr[], int low, int high)
{
	int mid;
	if (low<high)
	{ 
		mid= low+(high-low)/2;
		merge_sort(arr, low,mid);
		merge_sort(arr, mid+1, high);
		merge(arr,low, mid,high);
	}

}


int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
  for (int i=0;i<n; i++)
  {
     scanf ("%d", &arr[i]);
  }
  merge_sort(arr,0,n-1);
  //printing the sorted array
  for (int i=0;i<n; i++)
  {
     printf ("%d\n", arr[i]);
  }

   return 0; 
}