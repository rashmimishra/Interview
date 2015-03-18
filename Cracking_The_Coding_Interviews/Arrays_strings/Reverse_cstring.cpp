/* This program is written to reverse a c style string using pointers */
#include<iostream>

using namespace std;

void reverse (char *str)
{
	char *end = str;
	char temp;
	if(str)
	{
		while(*end)
			end++;
	
		end--;// not required if the string is not c style
		while (str < end)
		{
			temp = *str;
			*str++ = *end;
			*end-- = temp;
		}
	}
}



int main()
{
	char str[1024];
	cin>>str;
	reverse(str);
	cout<<str<<endl;
	return 0;
}