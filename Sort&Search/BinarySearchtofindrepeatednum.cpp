/*This Program is written to illustrate to find the max index and min idex if a given 
number in a sorted array using binary search.The time complexity of this program is 
O(logn) and space complexity is O(1). */

#include<cstdio>
#include<algorithm>

using namespace std;

int first(int arr[], int size, int elem)
{
int low = 0;
int high = size-1;
int mid;
while (low <= high)
{
  mid = low+(high-low)/2;
  if(arr[mid] == elem && arr[mid-1] != elem)
  {
    return mid;
  }
  else if(arr[mid]<elem)
  {
  	low = mid+1;
  }
  else
  {
  	high = mid-1;
  }

}
if (high<low)
  {
    return -1;
  }
}

int last(int arr[], int size, int elem)
{
int low = 0;
int high = size-1;
int mid;
while (low <= high)
{
  mid = low+(high-low)/2;
  if(arr[mid] == elem && arr[mid+1] != elem)
  {
    return mid;
  }
  else if(arr[mid]<elem)
  {
    low = mid+1;
  }
  else
  {
    high = mid-1;
  }

}
if (high<low)
  {
    return -1;
  }
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