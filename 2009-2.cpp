#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	int n=1;
	double a,sum=0.0;
	do{
		a=pow(-1,n-1)/(2*n-1);
		sum+=a;
	}while(a>1e-6);
	printf("结果为:%lf",sum);
	return 0;
}
