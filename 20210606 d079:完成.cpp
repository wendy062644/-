#include<iostream>
#include<string.h>
using namespace std;
int main() {
    int n, m, k;
    char word[1001], word1[1001];
    cin >> n;
    for(int a = 0; n > a; a++)
    {
    	cin >> word >> word1;
    	if(strlen(word) == 3&&word[0] == word[2]){
    		m = 0;
    		for(int b = 0; strlen(word1) > b; b++)
    		{
    			k = 0;
    			for(int c = 0; strlen(word) > c; c++)
    			{
    				if(word[c] != word1[b+c]){break;}
    				else{k++;}
    				if(k == 3){m++;}
				}
			}
			cout << m << endl;
		}
		else{cout << -1 << endl;}
	}
}  

題目: http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=d079
d079: 6.特殊格式字串XYX辨識與出現次數累計(105年台中區複賽)
