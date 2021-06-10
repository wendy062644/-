#include<iostream>
using namespace std;
int main()
{
	float n, num[10001][2], k = 0;
	string name[10001];
	cin >> n;
	for(int a = 0; n > a; a++)
	{
		cin >> name[a] >> num[a][0] >> num[a][1];
	}
	for(int a = 0; n > a; a++)
	{
		k = 0;
		for(int b = 0; n > b; b++)
		{
			if(num[a][0] > num[b][0] && num[a][1] > num[b][1]){k++;}
		}
		cout << name[a] << " " << k << endl;
	}
}

題目: http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=d012
d012: 98年台中區第二題(98年台中區複賽)
