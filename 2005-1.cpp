#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	double a,b,c;
	double x1,x2;//解为x1和x2 
	printf("输入方程的系数a，b，c：");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	double d;
	d=b*b-4*a*c;//计算德尔塔 
	if(a!=0){//abc都不为0时 
		if(d>0){
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			printf("方程的两个根为:%6.2f,%6.2f",x1,x2);
		} 
		else if(d=0){
			x1=(-b)/(2*a);
			printf("方程有两个相等的根:%6.2f",x1);
		}
		else printf("方程无实数根");
	}
	else{
		if(b!=0&&c==0){
			printf("方程只有零解");
		}
		else if(b!=0&&c!=0){
			x1=-c/b;
			printf("方程的解为:%6.2f",x1);
		}
		else if(b==0&&c==0){
			printf("方程有无数解");
		}
		else printf("方程无解");
	}
	return 0;
}
