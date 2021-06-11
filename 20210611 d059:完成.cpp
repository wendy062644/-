#include<iostream>
#include<math.h>
using namespace std;
bool num[65536];
int main(){
	num[0] = num[1] = true;
	long long int a, b, c, num1[30000], n = 0, t = 0, k = 0;
	cin >> a >> b;
	c = sqrt(b);
	for(int d = 2; c+1 > d; d++)
	{
		if(num[d] == 0){
			for(int e = d+d; c+1 > e; e+=d)
			{
				num[e] = true;
			}
			num1[n] = d;
			n++; 
		}
	}
	a = a + 4;
	for(a; b >= a; a++)
	{
		k = 0;
		if(a <= c){
			if(num[a-4] == 0&&num[a] == 0){break;}
			else{k = 1;}
		}
		else{
			if(a-4 > c){for(int d = 0; n > d; d++){if((a-4) % num1[d] == 0 || a % num1[d] == 0){k = 1; break;}}}
			else{if(num[a] == 0){
			for(int d = 0; n > d; d++){if( a % num1[d] == 0){k = 1; break;}}
			}else{k = 1; break;}}
		}
		if(k == 0){if(t != 0){cout << ",";}cout << "(" << a-4 << "," << a << ")"; t++;}
	}
	cout << endl << "共" << t << "組" << endl; 
}

備註: 先排出根號b所有質數，遇到大於根號b時再從根號b裡的所有質數去除
題目: http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=d059
d059: 2.表兄弟質數(101年彰雲嘉區複賽)
