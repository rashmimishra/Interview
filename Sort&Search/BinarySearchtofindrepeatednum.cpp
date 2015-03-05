/*This Program is written to illustrate to find the max index and min index if a given 
number in a sorted array using binary search.The time complexity of this program is 
O(logn) and space complexity is O(1). */

#include<cstdio>
#include<algorithm>

using namespace std;

int first(int arr[], int low, int high, int elem, int n)
{
int mid;
while (low <= high)
  {
    mid = low+(high-low)/2;
    if((mid == 0 ||arr[mid-1] < elem) && arr[mid] == elem)
      //This is the minimum index.
      return mid;
    else if(arr[mid]<elem)
  	 return first(arr,(mid+1),high,elem,n);
    else
  	 return first(arr,low,(mid-1),elem,n);
  }
 return -1;
}

int last(int arr[], int low, int high, int elem, int n)
{
int mid;
while (low <= high)
  {
    mid = low+(high-low)/2;
    if((mid == n-1 || arr[mid+1]> elem )&& arr[mid] == elem)
    {
      // This is max index.
      return mid;
    }
    else if(arr[mid]<elem)
      return last(arr,(mid+1),high,elem,n);
    else
      return last(arr,low,(mid+1),elem,n);
  } 
return -1;
}

int count(int arr[], int size, int elem)
{
  int i, j;
  i = first(arr, size, elem);
  j = last(arr, size , elem);
   if (i != -1 && j != -1)
    return j-i+1;
  else
    return -1;
}

int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i=0;i<n;i++)
  {
  	scanf("%d", &arr[i]);
  }
  sort (arr,arr+n);
  int elem;
  scanf("%d", &elem);
  int result=count(arr,n,elem);
  printf("%d\n", result);
  return 0;
}