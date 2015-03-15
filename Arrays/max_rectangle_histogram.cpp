/* This program is written to find out the max rectangle area from the histogram .
The stack data structure has been used to solve this problem in the O(n) time 
complexity where n is the size of array containing the heights of histogram. The 
space complexity of this program is O(n). */


#include<cstdio>
#include<stack>

using namespace std;

int max_area(int *arr, int n)
{
	//creating a stack
	stack<int> s_stack;
	//intializing other variables
	int area =0;
	int top;
	int area_with_top;
	int i =0;

	/* iterate through the array of heights and push
	it to stack if the current element is greater than 
	the top element of the stack. */
	while (i<n)
	{
		if(s_stack.empty() || arr[s_stack.top()] <= arr[i] )
			s_stack.push(i++);
		else
			/*now calculate the area with smallest top */
			{
				top = s_stack.top();
				s_stack.pop();
				if (s_stack.empty())
					area_with_top = arr[top] * i;
				else
					area_with_top = arr[top] * (i-s_stack.top()-1);

				if (area < area_with_top)
					area = area_with_top;

	
			}
	}

	/* now we need to remove the remaining elements from the stack and 
	calculate the area with each removed bar as the smallest bar. */

	while (s_stack.empty() == false)
	{
		top = s_stack.top();
		s_stack.pop();

		if (s_stack.empty())
			area_with_top = arr[top] * i;
		else
			area_with_top = arr[top] * (i-s_stack.top()-1);

		if (area < area_with_top)
		area = area_with_top;

	}

	return area;
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i=0;i<n;++i)
		scanf("%d", &arr[i]);
	int area = max_area(arr,n);
	printf("%d\n",area);
	return 0;
}