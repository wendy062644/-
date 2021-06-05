#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n, m;
    cin >> n;
    for(int a = 0; n > a; a++)
    {
    	int num = 2, k = 0, q = 0, ma;
    	double l;
    	cin >> m;
    	num = pow(num, m);
    	ma = sqrt(num);
    	ma = ma/2;
    	for(int aa = 1; ma >= aa; aa++)
		{
			int aaa = aa*aa;
			for(int bb = aa; ma >= bb; bb++)
			{
				int bbb = bb*bb;
				for(int cc = bb; ma >= cc; cc++)
				{
					l = sqrt(num - aaa - bbb - (cc*cc));
					q = sqrt(num - aaa - bbb - (cc*cc));
					if(l == q){cout << aa << " " << bb << " " << cc << " " << l << endl; k = 1;}
				}
			}
		}
		if(k == 0){cout << 0 << endl;}
	}
}  

備註: 2^k = a^2 + b^2 + c^2 + d^2 --> 2^k - a^2 - b^2 - c^2 = c^2
題目: http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=d076
d076: 3.指數2^k的四個自然數平方和之所有表示法(105年台中區複賽)
