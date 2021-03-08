#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	while(1){
		cin>>a>>b;
		int a1=a.size(),t=0,t1=0,ma=0,t2=0;
		if(a!=b){cout<<"Password settings are not consistent."<<endl;} 
		else{
			if(a1>12||a1<8){cout<<"Password should contain 8 to 12 characters."<<endl;} 
			else{
				for(int c=0;a1>c;c++){if(a[c]-1>63&&a[c]-1<90){t++;}
				else{
					if(a[c]-1<122&&a[c]-1>95){t1++;}
					else{
						if(a[c]-1>46&&a[c]-1<57){ma++;}
						else{
							t2++;
						}}
					}
				}
				if(t==0){cout<<"Password should contain at least one upper-case alphabetical character."<<endl;} 
				else{
					if(t1==0){cout<<"Password should contain at least one lower-case alphabetical character."<<endl;} 
					else{
						if(ma==0){cout<<"Password should contain at least one number."<<endl;} 
						else{
							if(t2==0){cout<<"Password should contain at least one special character."<<endl;} 
							else{
								int d=a1,n=0;
								for(int c=0;a1>c;c++){d--;if(a[d]==a[c]){n++;}}
								if(n==a1){cout<<"Symmetric password is not allowed."<<endl;} 
								else{
									
								}
							}
						}
					}
				}
			}
		}
	}
} 
