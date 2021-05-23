#include<iostream>
using namespace std;
int main(){
	int y,week,n=0;
	cin>>y;
	y=y-1;
	y=y*100;
	int num1[13]={12,31,29,31,30,31,30,31,31,30,31,30};
	int num2[13]={12,31,28,31,30,31,30,31,31,30,31,30};
	for(int m=y+1;y+100>=m;m++)
	{
	week=((m+((m-1)/4))-((m-1)/100)+((m-1)/400))%7;
		if(m%400==0){
			for(int a=0;12>a;a++)
			{
				week=(week+num1[a])%7;
				if(week==5){n++;}
			} 
		}
		else{
			if(m%100==0){
			for(int a=0;12>a;a++)
			{
				week=(week+num2[a])%7;
				if(week==5){n++;}
			} 
			}
			else{
				if(m%4==0){
					for(int a=0;12>a;a++)
					{
						week=(week+num1[a])%7;
						if(week==5){n++;}
					} 
					}
				else{
					for(int a=0;12>a;a++)
					{
						week=(week+num2[a])%7;
						if(week==5){n++;}
					} 
				}
			}
		}
		}
	cout<<"共有"<<n<<"次黑色星期五";
}

備註:21世紀 = 2001年1月1日~2100年12月31日
題目:http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=d022
d022: 97年台中區第二題
