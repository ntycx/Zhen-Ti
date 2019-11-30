#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;

int f(int n,int k){
	if(n==k||k==0)return 1;
	else return f(n-1,k-1)+f(n-1,k);
}

int main(){
	int n,k;
	printf("输入n和k:");
	scanf("%d%d",&n,&k);
	if((k<=0)||(n<=0)||(k>n)){
		printf("输入错误");
		return 0;
	}
	else{
		printf("结果为:%d",f(n,k));
		return 0;
	}
	
}
