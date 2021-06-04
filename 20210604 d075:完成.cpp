#include<iostream>
#include<string.h>
using namespace std;
int maxvalue = 0, rec[10] = {0}, num[10] = {0}, maxnum[10] = {0}, value[10] = {0};
int one(int n, int m, string word[10], int last)
{
	if(m < n){
		for(int a = 0; n > a; a++)
			{
				if(rec[a] == 0)
				{
					rec[a] = 1;
					num[m] = a;
					one(n, m+1, word, a);
				}
			}
		}
	if(m == n){
		int k = word[num[0]].size(), z[10] = {0};
		for(int a = 0; n-1 > a; a++)
		{
			int ma = 0, l = 0, o = 0;
			for(int b = word[num[a]].size() - 1; b >= 0; b--)
			{
				l++;
				for(int c = 0; word[num[a+1]].size() > c; c++)
				{
					int p=word[num[a+1]].size();
					if(word[num[a]][b] == word[num[a+1]][c]){o = 1;if(p - l - c > ma){ma = p - l - c;
					}}
				}
			}
			if(o == 0){rec[last] = 0; return 0;}
			k = k + ma;
			z[a] = k - word[num[a+1]].size();
		}
		if(k >= maxvalue){maxvalue = k; for(int a = 0; n > a; a++){maxnum[a] = num[a]; value[a] = z[a];}}
	}
	rec[last] = 0;
	return 0;
}
int main() {
    int n, m = 0, last = 0;
    string word[10];
    cin >> n;
    for(int a = 0; n > a; a++)
    {
    	cin >> word[a];
	}
	one(n, m, word, last);
	for(int a = 0; n > a; a++)
	{
		cout << word[maxnum[a]] << endl;
		if(a < n-1){for(int b = value[a]; b > 0; b--){cout<<"_";}}
	}
}  

題目: http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=d075
d075: 2.同字母字串列最寬排版(105年台中區複賽)
