/*This Program is written to illustrate dynamic programming approach
 to solve the max coin problem which are placed on the matrix or 2d 
 array.The time complexity of this approach is O(rc) and space 
 complexity of this solution is also O(rc) where r is no of rows 
 and c is no of columns.*/

 #include<cstdio>
 #include<algorithm>

 using namespace std;

 # define ROWS 4
 # define COLS 4

 int max_coins(int arr[][COLS] , int ROWS, int COLS) 
 {
  	//Creating memory 2-D array
   	int mem[ROWS+1][COLS+1] ;
	//base case 
	for (int i=0;i<= ROWS ;++i)
	{
		mem[i][0] = 0;
		mem[0][i] = 0;
	} 

   for (int i=1;i<=ROWS;++i)
   {
   	for (int j=1;j<=COLS;++j)
   	{
   		mem[i][j] = max(mem[i-1][j],
   			             mem[i][j-1])
   		              +arr[i-1][j-1];

   	}
   }
   /*
     for (int i=1;i<=ROWS;++i)
   {
   	for (int j=1;j<=COLS;++j)
   	{
   		printf("%d\n",mem[i][j]);
   	}
   	printf("\n");
   }*/
   return mem[ROWS][COLS];
}

int main()
{
	int arr[ROWS][COLS];
	for (int i = 0;i<4;++i)
	{
		for (int j=0;j<4;++j)
		{
			scanf("%d", &arr[i][j]);

		}
	}

	int res = max_coins(arr,ROWS,COLS);

	printf("%d\n",res);
}