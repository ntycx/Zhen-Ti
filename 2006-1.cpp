#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	int sum1=0,sum2=0,sum3=0,result;
	for(int k=1;k<=100;k++){
		sum1+=k;
	}
	for(int k=1;k<50;k++){
		sum2+=k*k;
	}
	for(int k=1;k<=10;k++){
		sum3+=1/k;
	}
	result=sum1+sum2+sum3;
	printf("%d",result);
	return 0;
}
