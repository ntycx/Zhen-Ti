#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	printf("请输入需要判断的数:");
	scanf("%d",&n);
	m=n;
	bool flag=true;
	int pre=-1;//前一位定为-1，使n的各位必定比其大 
	while(n){
		int tag=n%10;
		if(tag<=pre){
			flag=false;
			break;
		}
		pre=tag;
		n/=10;
	}
	if(flag==true)printf("%d是降序数\n",m);
	else printf("%d不是是降序数\n",m);
	return 0;
}
