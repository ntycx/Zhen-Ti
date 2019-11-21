#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	int ge,shi,bai;
	for(int i=100;i<=999;i++){
		ge=i%10;
		shi=i/10%10;
		bai=i/100;
		if(pow(ge,3)+pow(shi,3)+pow(bai,3)==i){
			printf("%d ",i);
		}
	}
	return 0;
}
