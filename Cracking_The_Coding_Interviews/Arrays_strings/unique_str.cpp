/*This code is written to find if the string has all unique characters. 
The first solution is written without using additional data structures.
and in the second solution, I will use additional data structures (boolean)
array of 256 size */
#include<iostream>
#include<string>
using namespace std;

 class solution
 {

public:
	// time complexity of this solution is O(n2)
	bool isunique_without_ds(string str)
	{
		int size = str.size();
		for(int i=0;i<size;++i)
		{
			for (int j=0;j<size;++j)
			{
				if(i !=j && str[i] == str[j])
					return false;
			}
		}
		return true;
	}

	// time complexity of this solution is O(n) but this solution would need extra space.

	bool isunique_with_ds(string str)
	{
		bool* mem = new bool[256];
		int size = str.size();
		for (int i =0; i<size;++i)
		{
			int temp = str[i];
			if(mem[temp] == true)
				return false;
			else
				mem[temp] = true;
		}

		return true;
	}
 };


 int main()
 {
 	solution sol;
 	string str1 = "rashmi";
 	bool isunique1_1 = sol.isunique_without_ds(str1);
 	cout<< isunique1_1<<endl;
 	bool isunique1_2 = sol.isunique_with_ds(str1);
 	cout<< isunique1_2<<endl;
 	string str2 =  "priyobrato";
 	bool isunique2_1 = sol.isunique_without_ds(str2);
 	cout<<isunique2_1<<endl;
 	bool isunique2_2 = sol.isunique_with_ds(str2);
 	cout<<isunique2_2<<endl;
 	return 0;
 }