#include<iostream>
#include<algorithm>
#include<map>
#include<iomanip>
using namespace std;
int main()
{
	pair<int, int>num[51];
	pair<int, int>num1[51];
	int n, tt[51];
	double t = 0;
	cin >> n;
	for(int a = 0; n > a; a++)
	{
		cin >> num[a].first;
		num[a].second = a+1;
	}
	sort(num,num+n);
	for(int a = 0; n > a; a++)
	{
		cin >> num1[a].first;
		num1[a].second = a+1;
	}
	sort(num1,num1+n);
	for(int a = 0; n > a; a++)
	{
		for(int b = 0; n > b; b++)
		{
			if(num[a].second == num1[b].second){t = t + (a-b)*(a-b); break;}
		}
	}
	t = 1 - ( (6*t)/(n*(n*n-1)));
	if(t > 0){cout << "+" << fixed << setprecision(3) << t;}
	else{cout << fixed << setprecision(3) << t;}
}

題目: http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=d065
d065: 3.斯皮爾曼等級相關係數(103年台中區複賽)
