#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#pragma GCC optimize(2)
using namespace std;
long long n;
long long  xo;
long long num;
string s;
int a[1001];
long long change(long long num) {
	int i=0;
	while(num>0) {
		a[i]=num%62;
		num=num/62;
		i++;
	}
	return i;
}
int main() {
	scanf("%lld%lld",&n,&xo);
	cin>>s;
	while(n--) {
		num=0;
		memset(a,0,sizeof(a));
		string str;
		cin>>str;
		int pri=1;
		for(int i=str.length()-1; i>=2; i--) {
			num+=(str[i]-'0')*pri;
			pri=pri*10;
		}
		num=num^xo;
		int k=change(num);
		cout<<"BV";
		    for(int j=k-1;j>=0;j--){
		    cout<<s[a[j]];
	    }
		    cout<<endl;

	    }
   }

