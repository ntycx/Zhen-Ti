#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[30][5];//二维数组存储成绩，行为学生，列为课程
int sum[30],avg[30];//sum数组存储每个学生的总分，avg存储平均分 
int avg1;//第一门课的平均分

void first_avg(){//求第一门课的平均分 
	int sum1;//第一门课的总分 
	for(int i=0;i<30;i++){
		sum1+=a[i][0];
	}
	avg1=sum1/30;
	printf("第一门课的平均分为:%d",avg1);
} 

void find_stu(){//找出两门不及格的学生
	int notPass;//不及格课程个数 
	for(int i=0;i<30;i++){
		notPass=0;
		for(int j=0;j<5;j++){
			if(a[i][j]<60) notPass++;
		}
		if(notPass>=2)printf("学号:%d,全部课程成绩:%d,平均成绩:%d",i,sum[i],avg[i]);
	}
}

void find_good(){
	bool flag=true;
	for(int i=0;i<30;i++){
		for(int j=0;j<5;j++){
			if(a[i][j]<=85){
				flag=false;
				break;
			}
		}
		if(flag==true||avg[i]>90)printf("%d ",i);
	}
}

int main(){
	for(int i=0;i<30;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&a[i][j]);//输入成绩 
		}
	}
	fill(sum,sum+30,0);//将总分全部初始为0 
	for(int i=0;i<30;i++){
		for(int j=0;j<5;j++){
			sum[i]+=a[i][j];//计算每个学生的总分 
		}
		avg[i]=sum[i]/5;//计算每个学生的平均分 
	}
	first_avg();
	find_stu();
	printf("平均成绩在90以上或全部课程成绩在85分以上的学生有:");
	find_good();
	return 0; 
}
