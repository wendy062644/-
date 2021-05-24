#include<iostream>
#include<string.h>
using namespace std;
int w[4]={0};
int change(int num[20],int m,int n,int num2[4],char st[20],int l){
    int k=0;
    for(int a=1;n>=a;a++)
    {
        cout<<st[a]<<" ";
        if(st[a]==num[a]){k++;}
    }
    cout<<endl;
    if(k==n){w[l-1]=m;return 1;}
    if(l==5){return 0;}
    num2[m]=1;
    if(m==1){for(int a=1;n>=a;a++){if(st[a]==0){st[a]=1;}else{st[a]=0;}}}
    if(m==2){for(int a=1;n>=a;a=a+2){if(st[a]==0){st[a]=1;}else{st[a]=0;}}}
    if(m==3){for(int a=2;n>=a;a=a+2){if(st[a]==0){st[a]=1;}else{st[a]=0;}}}
    if(m==4){for(int a=1;n>=a;a=a+3){if(st[a]==0){st[a]=1;}else{st[a]=0;}}}
    for(int a=1;4>=a;a++)
    {
        if(num2[a]==0){
            int r=change(num,a,n,num2,st,l+1);
            if(r==1){w[l-1]=m;return 1;}
            else{num2[m]=0;
            if(m==1){for(int a=1;n>=a;a++){if(st[a]==0){st[a]=1;}else{st[a]=0;}}}
            if(m==2){for(int a=1;n>=a;a=a+2){if(st[a]==0){st[a]=1;}else{st[a]=0;}}}
            if(m==3){for(int a=2;n>=a;a=a+2){if(st[a]==0){st[a]=1;}else{st[a]=0;}}}
            if(m==4){for(int a=1;n>=a;a=a+3){if(st[a]==0){st[a]=1;}else{st[a]=0;}}}
            return 0;}
        }
    }
}
int main()
{
    int n=0,num[20],num2[4]={0},l=0;
    char n1[4],st[20],en[20];
    cin>>n1>>st>>en;
    for(int a=2;strlen(n1)>a;a++)
    {
        n=n*10+n1[a]-48;
    }
    for(int a=2;n+1>=a;a++)
    {
        if(st[a]==en[a]){num[a-1]=0;}
        else{num[a-1]=1;}
        st[a-1]=st[a];
        cout<<st[a-1]<<endl;
    }
    for(int a=1;4>=a;a++)
    {
        change(num,a,n,num2,st,l+1);
    }
    for(int a=1;4>=a;a++)
    {
        cout<<w[a]<<endl;
    }
}

題目:http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=d023
d023: 97年台中區第三題
解題中
