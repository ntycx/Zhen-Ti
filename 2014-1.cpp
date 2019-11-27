#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;

double H(int n,double x){
	if(n==0)return 1;
	else if(n==1)return 2*x;
	else return 2*x*H(n-1,x)-2*(n-1)*H(n-2,x);
}

int main(){
	int n;
	double x;
	printf("请输入n,x:");
	scanf("%d%lf",&n,&x);
	printf("结果为:%lf",H(n,x));
	return 0;
}
