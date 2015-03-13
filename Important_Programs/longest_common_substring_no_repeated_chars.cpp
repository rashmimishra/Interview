/* This program is written to demonstrate dynamic programming approach to find the longest
substring with non repating character */

#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

#define NO_OF_CHARS 256


int longest_unique_substr(char *str)
{
	int n = strlen(str);
	//creating the aux array of size no_of_chars
	int * visited = (int *) malloc(sizeof (int)* NO_OF_CHARS);
	//initialising all elements of visited array to -1.
	memset(visited, -1, NO_OF_CHARS);
	int current_length = 1;
	int max_length = 1;
	int prev_index;

	//making first character of the string value in the visited array as 0.

    int first_char = str[0];
	visited[first_char] = 0;
	for (int i =1;i<n;++i)
	{
		int temp = str[i];
		prev_index = visited[temp];
		if(prev_index == -1 || (i-current_length) >prev_index)
			current_length++;
		else
		{
			if(current_length > max_length)
				max_length = current_length;
			current_length = i-prev_index;

		}
		visited[temp] = i;

	}
	if (current_length > max_length)
		max_length = current_length;
	free(visited);
	return max_length;



}


int main()
{
	char str[100001];
	scanf("%s", str);
	int len = longest_unique_substr(str);
	printf("%d\n", len);
	return 0;
}
