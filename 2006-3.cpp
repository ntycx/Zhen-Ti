#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	int a[5];
	int n,useless=0,use=0;//uesless统计无效票，use统计有效票 
	fill(a[0],a[0]+5,0);//将a数组所有元素初始化为0 
	while(1){
		scanf("%d",&n);
		if(n==-1)break;
		else{
			switch(n){
				case 1:a[1]++;break;
				case 2:a[2]++;break;
				case 3:a[3]++;break;
				case 4:a[4]++;break;
				default:a[0]++;
			}
			if(n=4&&n=3&&n=2&&n=1)use++;
			else useless++;
		}
	}
	for(int i=1;i<=4;i++){
		printf("%d号候选人的得票为:%d",i,a[i]);
	}
	int winner;
	for(int i=1;i<=4;i++){
		if(a[i]>use/2){
			winner=i;
			break;
		}
	}
	if(i>4)printf("无人当选");
	else printf("当选者为:%d",winner);
	return 0;
}
