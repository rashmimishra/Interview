/*This program is written to remove the duplicate charcaters from the 
string without using extra data structure. The time complexity of this 
solution is O(n2) . This program can be done in O(n) if hash can be used 
to store string charcaters. */

#include<iostream>
#include<cstring>

using namespace std;
class Solution
{
 public:
 	void removedup( char *s)
 	{
 		int i,j,k,size;
 		size = strlen(s);
 		for (i =0;i<size;++i)
 		{
 			for (j=k=i+1;j<=size;)
 			{
 				if(s[i] != s[k])
 				 {
 				 	//when there is  no duplicat then incrementing both j and k
 				 	s[j] = s[k];
 				 	j++;
 				 	k++;
 				 }
 				 else
 				 {
 				 	k++;
 				 }
 			}

 		}

 	}

};


int main()
{
	Solution sol;
	char str[1024];
	cin>> str;
	sol.removedup(str);
	cout<<str<<endl;
	return 0;

}
