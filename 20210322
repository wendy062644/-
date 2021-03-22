#include<iostream>
using namespace std;
int main()
{
	int n,k,t,num = 0;
	cin >> n >> k;
	for(int a = 2;a <= 30000;a++)
	{
		for(int b = 2;b <= n;b++){
			num = (num+a)%b;
		}
		num++;
		if(num == k){cout << a << endl;break;}
		num = 0;
	}
	if(num == 0){cout << 0 << endl;}
}
