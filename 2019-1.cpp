#include<stdio.h>
#include<math.h>
using namespace std;
double f(int n,double x){
	if(n==1)return x;
	else return x*f(n-1,x);
}

int main(){
	double x;
	int n;
	printf("请输入n,x:");
	scanf("%d%lf",&n,&x);
	printf("结果为:%lf",f(n,x));
	return 0;
}
