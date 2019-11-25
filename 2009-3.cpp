#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	double high=100.0,pass=0.0;
	for(int i=0;i<10;i++){
		pass+=high+high/2;
		high/=2;
	}
	printf("第十次共经过%lf米，反弹%lf米高",pass,high);
	return 0;
}
