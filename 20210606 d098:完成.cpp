#include<iostream>
#include<string.h>
using namespace std;
int main() {
    int n, m, mm, a, b, c;
    cin >> n;
    for(int k = 0; n > k; k++)
	{
		m = 0; mm = 0;
		cin >> a >> b >> c;
		int aa = 0, bb = 0;
		while(1)
		{
			m++;
			if(aa == 0){
				aa = a;
			}
			else{
				if(b > bb)
				{
					if(aa + bb > b){aa = aa - b + bb; bb = b;}
					else{bb = bb + aa; aa = 0;}
				}
				else{bb = 0;}
			}
			if(aa == c||bb == c){break;}
			if(aa == a&&bb == b){m = -1; break;}
		}
		aa = 0; bb = 0;
		while(1)
		{
			mm++;
			if(aa == 0){
				aa = b;
			}
			else{
				if(a > bb)
				{
					if(aa + bb > a){aa = aa - a + bb; bb = a;}
					else{bb = bb + aa; aa = 0;}
				}
				else{bb = 0;}
			}
			if(aa == c||bb == c){break;}
			if(aa == b&&bb == a){mm = -1; break;}
		}
		if(m == 0){cout << mm << endl;}
		else{if(mm == 0){cout << m << endl;}
		else{cout << min(m, mm) << endl;}}
	} 
}  

備註: 有兩種方法，先倒A或是先倒B，選出最佳解。
題目: http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=d098
d098: 7.無刻度容器倒水問題(105年台中區複賽)
