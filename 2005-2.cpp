#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	int a[5][5];
	int max,row,col;
	bool flag=false; //标记是否找到鞍点 
	printf("请输入一个5行5列的矩阵:\n");
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<5;i++){
		max=0;
		for(int j=0;j<5;j++){//找到每一行的最大值 
			if(a[i][j]>max){
				max=a[i][j];
				row=i;
				col=j;
			}
		}
		for(int k=0;k<5;k++){//比较最大值所在列的所有元素 
			if(a[k][col]<max) break;//如果不是列的最小值，跳出循环 
			else{
				flag=true;
				printf("鞍点为:a[%d][%d]=%d",row,col,a[row][col]);
				break;
			}
		}
	}
	if(flag==false)printf("没有鞍点");
	return 0;
}
