#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
struct student{
	int number;
	char name;
	int yuwen;
	int shuxue;
	int wuli;
	int huaxue;
	int yingyu;
	int sum;//总分 
	int rate;//排名 
}stu[30];

bool cmp(student a,student b){
	return a.sum>b.sum;
}

int main(){
	printf("请依次输入学生的学号、姓名、语文成绩、数学成绩、物理成绩、化学成绩、英语成绩:\n");
	for(int i=0;i<30;i++){
		scanf("%d%s %d%d%d%d%d",&stu[i].number,stu[i].name,&stu[i].yuwen,&stu[i].shuxue,&stu[i].wuli,&stu[i].huaxue,&stu[i].yingyu);
		stu[i].sum=stu[i].yuwen+stu[i].shuxue+stu[i].wuli+stu[i].huaxue+stu[i].yingyu;
	}
	sort(stu,stu+30,cmp);//排序 
	stu[0].rate=1;
	for(int i=1;i<30;i++){//分数一样排名一样 
		if(stu[i].sum==stu[i-1].sum)stu[i].rate=stu[i-1].rate;
		else stu[i].rate=i+1;
	}
	int flag=0;
	printf("前十名的同学为:\n");
	while(stu[flag].rate<=10){
		printf("学号:%d,姓名:%s",stu[flag].number,stu[flag].name);
		if((stu[flag].yuwen<80)||(stu[flag].shuxue<80)||(stu[flag].wuli<80)||(stu[flag].huaxue<80)||(stu[flag].yingyu<80)){
			printf("(该学生低于80分的功课)");
		}
		printf("\n");
		flag++;
	}
	return 0;
}
