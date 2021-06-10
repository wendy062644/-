#include<iostream>
using namespace std;  
int main()  
{  
    int t, num[501][3], rec[501]={0}, n;  
    for(int a = 0; a < 16; a++)  
    {
        for(int b = 0; b < a; b++)  
        {
            for(int c = 0; c < b; c++)  
            {  
                n=0;  
                if(a>=3){n+=a*(a-1)*(a-2)/6;} 
                if(b>=2){n+=b*(b-1)/2;} 
                if(c>=1){n+=c;}
                if(n>500){break;}
                if(rec[n]==0)
                {
                	rec[n] = 1; num[n][0] = a; num[n][1] = b; num[n][2] = c;
				}
            }
   		}
	}
    cin >> t;
    for(int a = 0; t > a; a++)
    {
    	cin >> n;
    	cout << num[n][0] << num[n][1] << num[n][2] <<endl;
	}
}  

題目:http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=e002
e002: 2.神秘的進位問題(100學年度全國決賽)
