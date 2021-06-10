#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	long long int n, m, k, num1, l, o, p; 
	char num[31];
	cin >> n;
	for(int a = 0; n > a; a++)
	{
		char num2[31][31]={0};
		string num3[61], t, aa;
		cin >>m >> k >> num;
		num1 = 0; p = 1;
		for(int b = 0; strlen(num) > b; b++)
		{
			num1 = num1 + num[b]-48;
		}
		num1 = num1/100 + (num1/10)%10 + num1%10; 
		if(num1 > k){l = 9 - num1 + k;}
		if(num1 == k){l = 0; p = 2;}
		if(num1 < k){l = k - num1;}
		if(l == 1){aa = "1";}if(l == 2){aa = "2";}if(l == 3){aa = "3";}if(l == 4){aa = "4";}if(l == 5){aa = "5";}
		if(l == 6){aa = "6";}if(l == 7){aa = "7";}if(l == 8){aa = "8";}if(l == 0){aa = "0";}
		for(int b = 0; m*p > b; b++)
		{
			num3[b] = num;
			if(b < m){num3[b].insert(b, aa);}
			else{num3[b].insert(b-m, "9");}
		}
		for(int b = 0; m*p > b; b++)
		{
			for(int c = b+1; m*p > c; c++)
			{
				for(int d = 0;m > d; d++)
				{
					if(num3[b][d] > num3[c][d]){t = num3[b]; num3[b] = num3[c]; num3[c] = t; break;}
					if(num3[b][d] < num3[c][d]){break;}
				}
			}
		}
		for(int b = 1; m*p-1 > b; b++)
		{
			if(num3[b] != num3[b-1]&&num3[b] != num3[0]&&num3[b] != num3[m*p-1]){cout << num3[b] <<endl;}
		}
	}
}

備註: 利用insert排出各種順序可有效降低運行時間
題目: http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=e026
e026: 2.還原密碼(104學年度全國決賽)
