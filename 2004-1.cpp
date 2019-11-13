#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	vector<int> num;//num数组用来存放每一位 
	int n,m,sum=0;//sum用来统计位数
	printf("请输入一个不多于5位的正整数:"); 
	scanf("%d",&n);
	while(n!=0){
		m=n%10;
		num.push_back(m);
		sum++;
		n/=10;
	}
	printf("这是一个%d位数\n",sum);
	for(int i=num.size()-1;i>=0;i--){
		printf("%d",num[i]);
		if(i!=0)printf(",");
		else printf("\n");
	}
	for(int i=0;i<num.size();i++){
		printf("%d",num[i]);
		if(i==num.size()-1)printf("\n");
	} 
	return 0;
}
