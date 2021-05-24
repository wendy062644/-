#include<iostream>
using namespace std;
int main()
{
    int m,n,ans=0;
    cin>>n;
    m=n/7;
    for(int a=0;m>a;a++)
    {
        if(n%11==0){cout<<"Yes 7:"<<a<<" 11:"<<n/11;ans=1;break;}
        n=n-7;
    }
    if(ans==0){cout<<"No";}
}

題目:http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=d021
d021: 97年台中區第一題
基本加減乘除
