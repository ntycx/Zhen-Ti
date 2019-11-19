/*
	该题多写几遍！ 
*/ 
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
	printf("请输入一个字符:");
	scanf("%c",&ch);
	for(int i=0;i<(ch-'A')+1;i++){//输出上半部分 
		for(int j=0;j<(ch-'A')-i;j++){
			printf(" ");
		}
		for(int k=0;k<2*i+1;k++){
			printf("%c",'A'+i);
		}
		printf("\n");
	}
	for(int i=0;i<ch-'A';i++){
		for(int j=0;j<i+1;j++){
			printf(" ");
		}
		for(int k=0;k<(ch-'A')*2-1-2*i;k++){
			printf("%c",ch-i-1);
		}
		printf("\n");
	}
	return 0;
}
