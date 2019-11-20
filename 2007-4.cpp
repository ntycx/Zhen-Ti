/**
多做几遍 
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
	double height=100;
	double path=0;
	for(int i=0;i<10;i++){
		path+=height+height/2;
		height/=2;
	}
	printf("共经过%lf米，反弹%lf米高",path,height);
	return 0;
}
