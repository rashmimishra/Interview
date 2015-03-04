/*This Program is written to illustrate the binary search in given sorted array.
The time complexity of this program is O(logn) and space complexity is O(1). */

#include<cstdio>
#include<algorithm>

using namespace std;

int binary_search(int arr[], int size, int elem)
{
int low = 0;
int high = size-1;
int mid;
while (low <= high)
{
  mid = low+(high-low)/2;
  if(arr[mid] == elem)
  {
  	printf("%d\n",mid);
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
/* If we have reached here, then it means that given element was not found
  in the array hence returning -1. */
if (high<low)
  {
    printf("Element was not found in the array.\n");
    return -1;
  }
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
  int result=binary_search(arr,n,elem);
  printf("%d\n", result);
  return 0;
}