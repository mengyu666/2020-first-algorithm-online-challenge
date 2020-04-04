#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
string s;
char s1[2222];
int sum,num,t;
int main() {
	s="Jyouhou";
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&num);
		getchar();
		scanf("%s",s1);
//		cout<<s1<<endl;
		int j=0;
		for(int i=0;i<num+1;i++) {
			if(j>6){
//				cout<<"yes"<<endl;
				sum++;
				j=0;
				i--;
//				cout<<s1[i]<<endl;
//				cout<<s[j]<<endl;
			}else if(s1[i]==s[j]){		
//				cout<<i<<endl;
				j++;
			}
		}
		cout<<sum<<endl;
		memset(s1,0,sizeof(s1));
		sum=0;
	}
}
