#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int a[11][6];//每行代表一个学生，每列代表一个课程，下标从1开始 
int SAvg[11],CAvg[6];//SAvg存储每个学生的平均分，CAvg存储每门课的平均分；
int max=0,maxCla,maxStu,FC; 
void stuAvg(int a[11][6]){//计算平均分 
	int sum;
	for(int i=1;i<=10;i++){
		sum=0;
		for(int j=1;j<=5;j++){
			sum+=a[i][j];
		}
		SAvg[i]=sum/10;
	}
}

void claAvg(int a[11][6]){//计算每门课的平均分 
	int sum;
	for(int j=1;j<=5;j++){
		sum=0;
		for(int i=1;i<=10;i++){
			sum+=a[i][j];
		}
		CAvg[j]=sum/5;
	} 
}

void findMax(int a[11][6]){//找最高分 
	for(int i=1;i<=10;i++){
		for(int j=1;j<=5;j++){
			if(a[i][j]>max){
				max=a[i][j];
				maxStu=i;
				maxCla=j;
			}
		}
	}
}

void fangcha(int a[11]){//求方差 
	int sumA=0,sumB=0;
	for(int i=1;i<=10;i++){
		sumA+=pow(a[i],2);
		sumB+=a[i];
	}
	FC=sumA/10-pow(sumB/10,2);
}

int main(){
	printf("输入学生的成绩:\n");
	for(int i=1;i<=10;i++){
		for(int j=1;j<=5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	stuAvg(a[11][6]);
	claAvg(a[11][6]);
	findMax(a[11][6]);
	fangcha(SAvg[11]);
	for(int i=1;i<=10;i++){
		printf("%d号学生的平均分是%d\n",i,SAvg[i]);
	}
	for(int i=1;i<=5;i++){
		printf("%d号课程的平均分是%d\n",i,CAvg[i]);
	}
	printf("%d号学生的%d号课程得最高分，为%d\n",maxStu,maxCla,max);
	printf("方差为%d",FC);
	return 0;
}
