#include<cstdio>
#include<iostream>

using namespace std;

class solutions
{
public:

 int binary_search(int arr[], int n, int k)
 {
 	int low = 0;
 	int high = n-1;
 	while(low<=high)
 	{
 		int mid = low+(high-low)/2;

 		if(arr[mid] == k)
 			return mid;
 		else if(arr[mid] > k)
 			high = mid-1;
 		else
 			low = mid+1;

 	}

 	return -1;
 }
};


int main()
{
	solutions sol;
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i =0;i<n;++i)
		scanf("%d", &arr[i]);
	int k;
	scanf("%d", &k);

	int loc = sol.binary_search(arr,n,k);

	cout<<loc<<endl;

	return 0;
}

