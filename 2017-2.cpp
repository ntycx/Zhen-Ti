#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int a,b;
	char c;
	printf("请输入两个操作数和一个运算符:");
	scanf("%d%d%c",&a,&b,&c);
	printf("\n结果为:");
	if(c=='+')printf("%d\n",a+b);
	else if(c=='-')printf("%d\n",a-b);
	else if(c=='*')printf("%d\n",a*b);
	else if(c=='/')printf("%d\n",a/b);
	else if(c=='%')printf("%d\n",a%b);
	else printf("输入错误！");
	return 0;
} 
