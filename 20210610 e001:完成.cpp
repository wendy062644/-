#include<iostream>
using namespace std;
int main()
{
	int n, t, num[10001], num1[10001], num2[10001], k = 0;
	cin >> n;
	for(int a = 0; n > a; a++)
	{
		cin >> num[a] >> num1[a];
		num2[a] = a;
	}
	for(int a = 0; n > a; a++)
	{
		for(int b = a+1; n > b; b++)
		{
			if(num[a] == num[b]){if(num1[a] > num1[b]){t = num[a]; num[a] = num[b]; num[b] = t; t = num1[a]; num1[a] = num1[b]; num1[b] = t; t = num2[a]; num2[a] = num2[b]; num2[b] = t;}
			else{if(num1[a] == num1[b]&&num2[a] > num2[b]){t = num[a]; num[a] = num[b]; num[b] = t; t = num1[a]; num1[a] = num1[b]; num1[b] = t; t = num2[a]; num2[a] = num2[b]; num2[b] = t;}}}
			if(num[a] > num[b]){t = num[a]; num[a] = num[b]; num[b] = t; t = num1[a]; num1[a] = num1[b]; num1[b] = t; t = num2[a]; num2[a] = num2[b]; num2[b] = t;}
		}
	}
	for(int a = 0; n > a; a++)
	{
		if(a > num2[a]){k = k + a -num2[a];}
		else{k = k + num2[a] -a;}
	}
	cout<<k<<endl;
}

備註: 使用bubble sort並用陣列紀錄
題目: http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=e001
e001: 1.搬雕像(100學年度全國決賽)
