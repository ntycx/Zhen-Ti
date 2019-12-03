#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
double t(double a,double b,double c){
	return (4.25*(a+b)+log(a+b+sqrt(a+b)+1/(a+b)))/(4.25*c+log(c+sqrt(c)+1/c));
}

int main(){
	FILE *fp;
	if((fp=fopen("data.txt","w"))==NULL){
		printf("打开失败！");
		exit(0);
	}
	double a,b,c,res;
	for(int i=0;i<10;i++){
		printf("请输入a,b,c:");
		scanf("%lf%lf%lf",&a,&b,&c);
		res=t(a,b,c);
		printf(" 结果为:%lf\n",res);
		fprintf(fp,"%lf",res);
	}
	fclose(fp);
	return 0;
}
