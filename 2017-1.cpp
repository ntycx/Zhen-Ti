#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;

double f(int n,double x){
	if(n==0)return 1;
	else if(n==1)return x;
	else return 2*x*f(n-1,x)-f(n-2,x);
}

int main(){
	FILE *fp;
	if((fp=fopen("tdat.txt","w"))==NULL){
		printf("打开文件失败");
		exit(0);
	}
	int n;
	double x;
	printf("请输入n,x:");
	scanf("%d%lf",&n,&x);
	for(int i=0;i<=n;i++){
		fprintf(fp,"%lf ",f(i,x));
	}
	fclose(fp);
	return 0;
}
