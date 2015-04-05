#include<iostream>
#include<string>
#include<stack>

using namespace std;

class Solution {
public:
    string simplifyPath(string path) 
    {
       
       int len = path.size();
       string res;
       int i=0;
     	while (i<len-1)
     	{
            if (path[i]=='/' && path[i+1]=='/')
            {
                path.erase(i,1);
            }
            else
            { 
            	i++; 
            }
        }

        if (path[len-1]!='/')
        	{
        		path=path+"/";
        	}
		stack<string> dirs;
        string str="";
        int flag =0;
        for (int i=0;i<len;i++)
        {
            if (path[i]=='/')
            	{
            		flag++;
            	}        
            if (flag==1)
            	{ 
            		str+=path[i];
            	}
            if (flag==2)
            {
                if (str=="/.." && !dirs.empty())
                {
                    dirs.pop();
                }
                if (str!="/." && str!="/..")
                {
                    dirs.push(str);    
                }
                flag=1;
                str="/";
            }
        }
        cout<<str<<endl;
        
        //Output Result
        if (dirs.empty())
        	{
        		return "/";
        	}
         string temp ="";
        while (!dirs.empty())
        {
        	cout<<"temp"<<dirs.top()<<endl;
            temp=dirs.top()+temp;
            dirs.pop();
        }
        return temp;
        
    }
};


int main()
{
	Solution sol;
	//string s = "/home//foo/";
	//string s1 = "/a/./b/../../c/";
	//string s3 = "/../";
	string s4 = "/...";

	//string res1 = sol.simplifyPath(s);
	//cout<<res1<<endl;
	//string res2 = sol.simplifyPath(s1);
	//cout<<res2<<endl;
	//string res3 = sol.simplifyPath(s3);
	//cout<<res3<<endl;
	string res4 = sol.simplifyPath(s4);
	cout<<res4<<endl;

	return 0;

}