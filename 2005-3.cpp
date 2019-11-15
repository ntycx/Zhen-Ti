#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
struct Farction{
	long long up;//分子 
	long long down;//分母 
}f1,f2,sum;
int main(){
	f1.down=1;
	f1.up=2;
	sum.up=f1.up;
	sum.down=f1.down;//初始化sum 
	for(int i=0;i<19;i++){//从第1个加到20个，共加19次 
		f2.up=f1.down+f2.up;
		f2.down=sum.up;
		sum.up=sum.up*f2.down+sum.down*f2.up;
		sum.down=sum.down*f2.down;//分数加法
		f1.up=f2.up;
		f1.down=f2.down; 
	}
	printf("结果为：%lld/%lld",sum.up,sum.down);
	return 0;
} 
