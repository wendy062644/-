#include<iostream>
using namespace std;
int main(){
	int n,m,an[100]={0},pl=1,num[100][100];
	string a,b,an1[100][100],pl1[100];
	cin>>n>>a>>m>>b;
	an1[1][1]=a;pl1[1]=b;num[1][1]=m;an[1]=1;
	for(int d=1;n>d;d++)
	{
		cin>>a>>m>>b;
		int w=0;
		for(int e=1;pl>=e;e++)
		{
			if(b==pl1[e]){
				w=1;
				int ans=0;
				for(int c=1;an[e]>=c;c++)
				{
					if(a==an1[e][c]){num[e][c]=num[e][c]+m;ans=1;break;}
				}
				if(ans==0){an[e]++;an1[e][an[e]]=a;num[e][an[e]]=m;}
			}
		}
		if(w==0){
			pl++;
			pl1[pl]=b;
			num[pl][1]=m;
			an1[pl][1]=a;
			an[pl]++;}}
	for(int c=1;pl>=c;c++)
	{
		cout<<pl1[c]<<":";
		for(int d=1;an[c]>=d;d++)
		{
			cout<<an1[c][d]<<" "<<num[c][d];
			if(d!=an[c]){cout<<",";}
		}
		cout<<endl;
}}

題目:http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=d072
d072: 4.動物數量統計(103年彰雲嘉區複賽)
