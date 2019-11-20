/**
多做几遍 
*/
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	int sum;//各因子之和 
	for(int i=1;i<=1000;i++){
		sum=0;//每次sum清零 
		for(int j=1;j<sqrt(i);j++){
			if(i%j==0){
				if(i==j*j||(i/j)==i){//如果两个因子相同或者j是1的时候，只加前面的j
					sum+=j; 
				}
				else sum=sum+j+i/j;
			}
		}
		if(sum==i)printf("%d ",i);
	}
	return 0;
}
