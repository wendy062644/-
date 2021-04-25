#include<iostream>
using namespace std;
int main()
{
    int coin[6]={1,5,10,25,50},n,num[99999];
    cin>>n;
    num[0]=1;
    for(int a=0;5>a;a++)
    {
        for(int b=1;n>=b;b++)
        {
            if(b-coin[a]>=0)num[b]=num[b]+num[b-coin[a]];
        }
    }
    cout<<num[n]<<endl;
}

題目:http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=d032
d032: 96年台中區第二題
動態規劃-換零錢問題(組合數)
