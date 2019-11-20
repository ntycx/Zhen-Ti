#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	char ch;
	printf("请输入一个小写字符:");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z'){
		ch-=32;
		printf("转换后字符为:%c\n",ch);
	}
	else{
		printf("输入错误！");
	}
	return 0;
}
