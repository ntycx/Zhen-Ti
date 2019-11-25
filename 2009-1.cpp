#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
double p(int n,double x){
	if(n==0)return 1;
	else if(n==1)return x;
	else return ((2*n-1)*x*p(n-1,x)-(n-1)*p(n-2,x))/n;
}

int main(){
	int n;
	double x;
	printf("%lf\n",p(5,2.4));
	return 0;
}
