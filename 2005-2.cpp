#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
const int INF=1000000000;
int main(){
	int a[5][5];
	int max,row,col;
	bool flag=false;
	printf("请输入一个5行5列的矩阵:\n");
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<5;i++){
		max=0;
		for(int j=0;j<5;j++){
			if(a[i][j]>max){
				max=a[i][j];
				row=i;
				col=j;
			}
		}
		for(int k=0;k<5;k++){
			if(a[k][col]<max) break;
			else{
				printf("鞍点为:a[%d][%d]=%d",row,col,a[row][col]);
				return 0;
			}
		}
	}
	printf("没有鞍点");
	return 0;
}
