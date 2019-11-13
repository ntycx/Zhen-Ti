#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	char a[55],temp;
	printf("输入50个字符：");
	for(int i=0;i<50;i++){
		scanf("%c",&a[i]);
	}
	for(int i=0;i<50;i++){
		for(int j=0;j<49-i;j++){
			if(strcmp(a[j],a[j+1])<0){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("排序后的字符为：");
	for(int i=0;i<50;i++){
		printf("%c",a[i]);
		if(i!=49)printf(" ");
		else printf("\n");
	}
	return 0;
}
