#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
	double x,x1,f,f1;
	x=-1;
	do{
		x1=x;
		f=pow(x,41)+pow(x,3)+1;
		f1=41*pow(x,40)+3*x*x;
		x=x1-f/f1;
	}while(fabs(x-x1)>1e-6);
	printf("The result is:%lf",x);
	return 0;
}
