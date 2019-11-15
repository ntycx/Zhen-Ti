#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
struct Farction{
	int up;//分子 
	int down;//分母 
}f1,f2,sum;
int main(){
	f1.down=1;
	f2.up=2;
	for(int i=0;i<19;i++){
		f2.up=f1.down+f2.up;
		f2.down=sum.up;
		sum.up=f1.up*f2.down+f1.down*f2.up;
		sum.down=f1.down*f2.down;
	}
} 
