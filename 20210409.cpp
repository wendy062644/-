#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,num1[1000],num2[1000],l,n=1,ans=0;;
num1[0]=0;num2[0]=0;
cin>>a>>b>>c;
	int a1=0,b1=0;
	for(int m=0;1000>m;m++)
	{
	    if(a1==0){a1=a;num1[n]=a1;num2[n]=b1;n++;}
	    while(a1>0){
            if(b1==0){if(a1>b){b1=b;a1=a1-b;}else{b1=a1;a1=0;}num1[n]=a1;num2[n]=b1;n++;}
            if(a1==c||b1==c){ans=1;break;}
            if(a1==0){break;}
            if(a1==num1[2]&&b1==num2[2]&&n>3){break;}
            if(b1==b){b1=0;num1[n]=a1;num2[n]=b1;n++;}
            else{b1=b1+a1;a1=b1-b;if(a1<0){b1=b1+a1;a1=0;num1[n]=a1;num2[n]=b1;n++;}else{b1=b;num1[n]=a1;num2[n]=b1;n++;}}
            if(a1==c||b1==c){ans=1;break;}
            if(a1==num1[2]&&b1==num2[2]&&n>3){break;}
	    }
        if(a1==num1[2]&&b1==num2[2]&&n>3){break;}
        if(a1==c||b1==c){break;}
	}
if(ans==1){
cout<<"(0,0)";
    for(int d=1;n>d;d++)
    {
        cout<<"->("<<num1[d]<<","<<num2[d]<<")";
}}
else{cout<<"NO";}
}


網址:http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=d028
d028: 97年雲嘉區第三題
