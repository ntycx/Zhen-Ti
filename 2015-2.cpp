#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	int num;
	for(int i=0;i<10;i++){//i为前两位 
		for(int j=0;j<10;j++){//j为后两位 
			num=j+j*10+i*100+i*1000;
			for(int k=10;k<100;k++){
				if(k*k==num)printf("车牌号为:%d",num);
			}
		}
	}
	return 0;
}
