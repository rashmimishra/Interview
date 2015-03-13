/* This program is written to demonstrate Knuth-Morris and Pratt algorithm(KMP) for pattern matching. 
The time complexity of this program is O(m+n) where m is the length of the text and n is length of the 
pattern. The space complexity of this program is O(n) and it is required to make prefix array for the 
pattern chracters. */

#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

void LPSarray(char *pattern, int n, int *lps)
{
	int len = 0;
	lps[0] = 0; //first entry is prefix table is always 0.
	int i =1;
	while(i <n)
	{
		if (pattern[i] == pattern[len])
		{
			len++;
			lps[i] = len;
			i++;
		}
		else
		{
			if(len != 0)
			{
				len = lps[len-1];
			}
			else
			{
				lps[i] = 0;
				i++;
			}


		}
	}
}

void KMP( char *text, char *pattern)
{
	//calculating the length 
	int m = strlen(text);
	int n = strlen(pattern);
	//creating the prefix array for pattern
	int *lps = (int *)malloc(sizeof(int) * n);
	// making the prefix table 
	LPSarray(pattern,n,lps);
	int i =0;
	int j =0;
	while (i <m)
	{
		if (pattern[j] == text[i])
		{
			++j;
			++i;
		}
		if (j ==n)
		{
			printf("Found pattern at index %d\n",i-j);
			j = lps[j-1];
		}	
		else if(i <m && pattern[j] != text[i])
		{
			if( j != 0)
				j = lps[j-1];
			else
				i = i+1;
		}

	}
	free (lps);


}

int main()
{
	char text[100];
	char pattern[10];
	scanf("%s", text);
	scanf("%s", pattern);
	KMP( text, pattern);
	return 0;
}

