#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	vector<int> num;//numÊý×éÓÃÀ´´æ·ÅÃ¿Ò»Î» 
	int n,m,sum=0;//sumÓÃÀ´Í³¼ÆÎ»Êý
	printf("ÇëÊäÈëÒ»¸ö²»¶àÓÚ5Î»µÄÕýÕûÊý:"); 
	scanf("%d",&n);
	while(n!=0){
		m=n%10;
		num.push_back(m);
		sum++;
		n/=10;
	}
	printf("ÕâÊÇÒ»¸ö%dÎ»Êý\n",sum);
	for(int i=num.size()-1;i>=0;i--){
		printf("%d",num[i]);
		if(i!=0)printf(",");
		else printf("\n");
	}
	for(int i=0;i<num.size();i++){
		printf("%d",num[i]);
		if(i==num.size()-1)printf("\n");
	} 
	return 0;
}
