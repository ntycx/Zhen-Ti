#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int card[53];
	vector<int> zhen;
	fill(card,card+53,1); 
	for(int i=2;i<=52;i++){
		for(int j=1;i*j<=52;j++){
			int k=i*j;
			card[k]=-card[k];
		}
	}
	int count=0;
	for(int i=1;i<=52;i++){
		if(card[i]==1){
			zhen.push_back(i);
			count++;
		}
	}
	printf("共有%d张牌正面朝上,它们的位置为:",count);
	for(int i=0;i<count;i++){
		printf("%d ",zhen[i]);
	} 
	return 0;
}
