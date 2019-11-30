#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;

int f(int n){
	if(n==1)return 1;
	else if(n==2)return 1;
	else return f(n-1)+f(n-2);
}

int main(){
	FILE *fp;
	if((fp=fopen("fab.txt","w"))==NULL){
		printf("Can not open file\n");
		exit(0);
	}
	int sum=0,res;
	for(int i=1;i<=20;i++){
		res=f(i);
		sum+=res;
		fprintf(fp,"%d ",res);
	}
	printf("前二十项和为:%d",sum);
	fclose(fp);
	return 0;
}
