#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
const int maxn=10010;
int n;
struct student{//学生结构体 
	int number;//学号 
	char name;//姓名 
	int shuxue;//数学成绩 
	int yuwen;//语文成绩 
	int yingyu;//英语成绩 
	int zongfen;//总分 
	int paiming;//排名 
}stu[maxn];

bool cmp(student a,student b){//排序规则函数 
	return a.zongfen>b.zongfen;
} 

int main(){
	FILE *fp;
	if((fp=fopen("student.dat","w"))==NULL){
		printf("Cannot open file\n");
		exit(0);
	}
	printf("输入学生数:");
	scanf("%d",&n);
	printf("\n输入学生信息:\n");
	for(int i=0;i<n;i++){
		scanf("%d%s %d%d%d",&stu[i].number,stu[i].name,&stu[i].shuxue,&stu[i].yuwen,&stu[i].yingyu);
		stu[i].zongfen=stu[i].shuxue+stu[i].yuwen+stu[i].yingyu;
	}
	sort(stu,stu+n,cmp);//使用头文件#include<algorithm>下的排序函数 
	stu[0].paiming=1;//第一个学生为第一名
	for(int i=1;i<n;i++){
		if(stu[i].zongfen==stu[i-1].zongfen){
			stu[i].paiming=stu[i-1].paiming;//分数一样，排名一样 
		}
		else stu[i].paiming=i+1;
	}
	for(int i=0;i<n;i++){
		printf("学号:%d,姓名:%s,数学成绩:%d,语文成绩:%d,英语成绩:%d,总分:%d,名次:%d\n",stu[i].number,stu[i].name,stu[i].shuxue,stu[i].yuwen,stu[i].yingyu,stu[i].zongfen,stu[i].paiming);
		fprintf(fp,"学号:%d,姓名:%s,数学成绩:%d,语文成绩:%d,英语成绩:%d,总分:%d,名次:%d\n",stu[i].number,stu[i].name,stu[i].shuxue,stu[i].yuwen,stu[i].yingyu,stu[i].zongfen,stu[i].paiming);
	}
	return 0;
}
