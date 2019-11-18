#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	int ge,shi,bai;// 分别代表个位十位和百位 
	for(int i=100;i<=999;i++){
		ge=i%10;
		shi=i/10%10;
		bai=i/100;
		if(i==ge*ge*ge+shi*shi*shi+bai*bai*bai){//如果是水仙花数 
			printf("%d\n",i);
		}
	}
	return 0;
}
