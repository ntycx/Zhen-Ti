#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
const int INF=1000000000;//无限大 
int prime[INF],pNum=0;//prime存储所有素数
int n;
int isPrime[INF]={0};//所有的数是否为素数，i是素数则isPrime[i]==1 

int prism(int n){//判断是否为素数 
	if(n<=1)return 0;
	int sqr=(int)sqrt(1.0*n);
	for(int i=2;i<=sqr;i++){
		if(n%i==0)return 0;
	} 
	return 1;
}

void findPrime(){//将所有素数存储到prime数组中 
	int flag;
	for(int i=2;i<=INF;i++){
		flag=prism(i);
		if(flag==1){
			prime[pNum++]=i;
			isPrime[i]=1;
		}
	}
}

int main(){
	FILE *fp;
	if((fp=fopen("result.dat","w"))==NULL){
		printf("Cannot open file\n");
		exit(0);
	}
	scanf("%d",&n);
	int m;
	for(int i=0;i<=pNum;i++){
		m=n-prime[i];//用n减去一个素数 
		if(isPrime[m]==1){
			fprintf(fp,"%d = %d + %d\n",n,prime[i],m);//如果结果仍是素数，则写入文件 
		}
	}
	fclose(fp);
	return 0;
} 
