#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
	vector<int > num;
	int n,m;
	printf("请输入一个不多于5位的数:");
	scanf("%d",&n);
	while(n){
		m=n%10;
		num.push_back(m);
		n/=10;
	}
	printf("是%d位数字\n",num.size());
	for(int i=num.size()-1;i>=0;i--){//打印每一位数字 
		printf("%d ",num[i]);
	}
	printf("\n");
	for(int i=0;i<num.size();i++){//倒序打印 
		printf("%d ",num[i]);
	}
	return 0;
}
