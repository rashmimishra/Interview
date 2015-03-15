#include<cstdio>
#include<cstring>

using namespace std;


int find_index(char *str, char *pattern)
{
	int m = strlen(str);
	int n = strlen(pattern);
	int i,j;
	for (i=0;i<=m-n;++i)
	{
		for(j=0;j<n;++j)
		{
			if(str[i+j] != pattern[j])
			{
				break;
			}
		}
		if (j == n)
			return i;
	}
	return -1;
}

int main()
{
	char str[10000];
	char pattern[100];
	scanf("%s", str);
	scanf("%s", pattern);
	int val = find_index(str,pattern);
	printf("%d\n",val);
	return 0;
}