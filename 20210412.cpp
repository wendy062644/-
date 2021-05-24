#include<bits/stdc++.h>
using namespace std;
int main()
{
int l,n,m,num[1000]={0},num2[1000]={0},max[1000]={0};
cin>>n>>m;
for(int a=0;n>a;a++)
{
	cin>>num[a]>>l;
	num2[a]=l*num[a];
}
for(int a=0;n>a;a++)
{
	for(int b=m;b>0;b--)
	{
		if(max[b-num[a]]+num2[a]>max[b]){max[b]=max[b-num[a]]+num2[a];}
	}
	cout<<max[m]<<endl;
}
cout<<max[m];
} 
