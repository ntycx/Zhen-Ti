#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	double ei,former,cha;
	int n=2;
	former=2.0;
	do{
		ei=pow(1+1.0/n,n);//这里不能写成1/n 
		cha=fabs(ei-former);
		former=ei;
		n++;
	}while(cha>1e-6);
	n-=1;
	printf("e的值为:%lf\n",ei);
	printf("对应的n为:%d\n",n);
	return 0;
}
