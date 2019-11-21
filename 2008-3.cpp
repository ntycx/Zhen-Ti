#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
int stu[10][5];
int avgStu[10],avgSub[5];//分别存储学生平均分和课程平均分
int maxStu,maxSub;
int maxScore=0;
double FC;

void find_stuAvg(){
	int sum;
	for(int i=0;i<10;i++){
		sum=0;
		for(int j=0;j<5;j++){
			sum+=stu[i][j];
		}
		avgStu[i]=sum/5;
	}
	for(int i=0;i<10;i++){
		printf("%d号学生的平均分是%d\n",i,avgStu[i]);
	}
}

void find_subAvg(){
	int sum;
	for(int j=0;j<5;j++){
		sum=0;
		for(int i=0;i<10;i++){
			sum+=stu[i][j];
		}
		avgSub[j]=sum/10;
	} 
	for(int i=0;i<5;i++){
		printf("%d号课程的平均分是%d",i,avgSub[i]); 
	}
}

void find_Max(){
	for(int i=0;i<10;i++){
		for(int j=0;j<5;j++){
			if(stu[i][j]>maxScore){
				maxScore=stu[i][j];
				maxStu=i;
				maxSub=j;
			}
		}
	}
	printf("最高的分数对应的学生为:%d ,课程为:%d ,最高分为:%d",maxStu,maxSub,maxScore);
}

void fangcha(){//求方差 
	int sumA=0,sumB=0;
	for(int i=0;i<10;i++){
		sumA+=pow(avgStu[i],2);
		sumB+=avgStu[i];
	}
	FC=sumA/10-pow(sumB/10,2);
	printf("平均分方差为:%lf",FC);
}

int main(){
	printf("请输入10个学生的5门课的成绩:\n");
	for(int i=0;i<10;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&stu[i][j]);
		}
	}
	find_stuAvg();
	find_subAvg();
	find_Max();
	fangcha();
	return 0;
} 
