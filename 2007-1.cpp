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
	ch-=32;
	printf("转换后字符为:%c\n",ch);
	return 0; 
}
