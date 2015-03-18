#include<cstdio>
#include<string>

using namespace std;

class solutions
{
public:
    int numDecodings(string s) 
    {
        int size = s.size();

    if ((s.empty())||(s[0]=='0')){return 0;}
         
        int t1=1; //num from 0 to current-1
        int t2=1; //num from 0 to current-2
        for (int i=1; i<size;i++){
            int tc=0; //num from 0 to current
            if ((s[i]=='0')){
                int d1 = (s[i-1]-'0');
                if( (d1<3)&&(d1>0) ){tc=t2;}
            }
            if (s[i]!='0'){
                if (s[i-1]=='0'){tc = t1;}
                else{
                    int d2 = (s[i-1]-'0')*10+(s[i]-'0');
                    if (d2<=26) {tc = t1+t2;}
                    else{tc =t1;}
                }
            }
            t2=t1;
            t1=tc;  
        }
       return t1; 
       } 
};


int main()
{
    solutions sol;
    string s1 = "100";
    string s2 = "101";

    int ans1 = sol.numDecodings(s1);
    int ans2 = sol.numDecodings(s2);

    printf("%d\n",ans1);
    printf("%d\n",ans2);
    return 0;
}  