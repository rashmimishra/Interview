/* This program is written to set the entire row and column to 0 if 
the cell has 0. */

#include<iostream>
#include<vector>

using namespace std;

class Solution
{

	public:
	void setzero(vector<vector<int> > &matrix,int row, int col)
	{
		vector<int> v_row;
		vector<int> v_col;
     	for (int i=0;i<row;++i)
		{
			for (int j=0;j<col;++j)
			{
				if(matrix[i][j] == 0)
				{
					v_row.push_back(i);
					v_col.push_back(j);
				}

			}
		}
		vector<int>::iterator it;
		for(it=v_row.begin();it<v_row.end();++it)
		{
			for (int j = 0;j<col;++j)
			{
				matrix[*it][j] = 0;
			}
		}

		for (int i =0; i<row;++i)
		{
			for(it=v_col.begin();it<v_col.end();++it)
			{
				matrix[i][*it] = 0;
			}
		}

	}
};


int main()
{
	Solution sol;
	int row;
	int col;
	cin>>row;
	cin>>col;
	vector<vector<int> > matrix(row,vector<int>(col));
	for (int i=0;i<row;++i)
	{
		for (int j=0;j<col;++j)
		{
			cin>>matrix[i][j];
		}
	}

	sol.setzero(matrix, row, col);

	//printing the matrix. 

	for (int i=0;i<row;++i)
	{
		for (int j=0;j<col;++j)
		{
			cout <<matrix[i][j]<<" ";
		}
		cout <<endl;
	}
	return 0;

}