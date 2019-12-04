#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
vector<int> pri;

bool isPrime(int n){//判断是否为素数 
	int sqr=(int)sqrt(1.0*n);
	for(int i=2;i<=sqr;i++){
		if(n%i==0)return false;
	}
	return true;
}

int main(){
	FILE *fp;
	if((fp=fopen("prime.txt","w"))==false){
		printf("Cannot open file\n");
		exit(0);
	}
	for(int i=2;i<=300;i++){
		if(isPrime(i)==true){
			fprintf(fp,"%d",i);
			pri.push_back(i);//如果是素数，则写入数组和文件 
		} 
	}
	int max=0,maxI,count=0;//最大的双胞胎数和它的位置
	for(int i=1;i<=pri.size()-1;i++){
		if(pri[i]-pri[i-1]==2){
			count++;
			if(pri[i]>max){//记录最大双胞胎数 
				max=pri[i];
				maxI=i;
			}
		}
	}
	printf("有%d对双胞胎数，最大的一对为%d,%d\n",count,pri[maxI-1],pri[maxI]);
	fclose(fp);
	return 0;
}
