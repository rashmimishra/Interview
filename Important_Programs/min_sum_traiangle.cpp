/* This program is written to find the minimum triangle sum. Dynamic
programming approach has been used to solve this question. The time 
complexity of this problem is O(k2)  and space complexity is O(K) where
K is the numberof levels in the triangle.*/


#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int minimum_sum_traig(int *arr, int k)
{
	//creating a sum vector to store the sum;
	vector <int> sum_vect;
	int sum =0;
	
	for (int i = 0;i<k;++i)
	{
		for (int j= 0;j<=i;++j)
		{
			int temp = *((arr+i*k)+j);
			int val = sum+temp;
			sum_vect.push_back(val);
		}

		/*find the min number from the vector. Since minimum element
		returns the address hence need the pointer to access the value */
		 sum = *min_element(sum_vect.begin(),sum_vect.end());
		 //clearing the vector so that new values will be inserted 
		 sum_vect.clear();

	}


	return sum;
}


int main()
{
	int k;
	scanf("%d",&k);
	int arr[k][k];
	for (int i = 0;i<k;++i)
	{
		for (int j= 0;j<=i;++j)
		{
			scanf("%d" , &arr[i][j]);
		}
	}
	int min_sum = minimum_sum_traig(arr[0],k);
	printf("%d\n",min_sum);
	return 0;
}