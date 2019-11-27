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
struct student{
	int number;
	char name;
	int shuxue;
	int yuwen;
	int yingyu;
	int zongfen;
	int paiming;
}stu[maxn];

int main(){
	printf("输入学生数:");
	scanf("%d",&n);
	printf("\n输入学生信息:\n");
	for(int i=1;i<n;i++){
		scanf("%d%s %d%d%d",&stu[i].number,stu[i].name,&stu[i].shuxue,&stu[i].yuwen,&stu[i].yingyu);
		stu[i].zongfen=stu[i].shuxue+stu[i].yuwen+stu[i].yingyu;
	}
}
