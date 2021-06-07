#include<iostream>
using namespace std;
int main() {
	long long int a, b, ma = 0, num = 0;
	cin >> a >> b;
	for(a; b >= a; a++)
	{
		long long int m = a, n = a;
		while(1)
		{
			if(m%2==0){
				m = m / 2;
				n = n + m;
			}
			else{
				m = m * 3 + 1;
				n = n + m;
			}
			if(m == 1){break;}
		}
		if(n > ma){ma = n; num = a;}
	}
	cout << ma << " " << num <<endl;
}

題目: http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=d078#
d078: 5.解密(105年台中區複賽)
