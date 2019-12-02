#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
const int INF=1000000000;//无限大
int main(){
	vector<int> num;//向量num存储符合条件的值 
	vector<int> resRow;//向量resRow存储符合条件的值对应的行 
	vector<int> resCol; //向量resCol存储符合条件的值对应的行 
	int a[5][5];
	int min,row,col;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	bool flag=true;
	for(int i=0;i<5;i++){
		min=INF;
		for(int j=0;i<5;j++){
			if(a[i][j]<min){
				min=a[i][j];
				row=i;
				col=j;
			}
		}
		for(int k=0;k<5;k++){
			if(a[k][col]<min){
				flag=false;
				break;
			}
			if(flag==true){
				num.push_back(a[row][col]);
				resRow.push_back(row);
				resCol.push_back(col);//将信息写入对应数组 
			} 
		}
	}
	int lenth=num.size();//总共有多少个点
	if(lenth==0)printf("NO FIND!\n");//长度为0则没找到对应元素 
	for(int i=0;i<lenth-1;i++){
		printf("%d(%d,%d)",num[i],resRow[i],resCol[i]);
		if(i<lenth-1)printf("，");
		else printf("。\n"); //对应题目格式，两个结果之间加逗号，最后一个结果后加句号 
	}
	return 0;
}
