#include<stdio.h>
using namespace std;
int main(){
	int a[10][10];
	printf("请输入数据:\n");
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int max=0,row,col;
	bool flag;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			max=0;
			flag=true;
			if(a[i][j]>max){
				max=a[i][j];
				row=i;
				col=j;
			}
		}
		for(int k=0;k<10;k++){
			if(a[k][col]<max){
				flag=false;
				break;
			}
		}
		if(flag==true)printf("%a[%d][%d]=%d为鞍点\n",row,col,a[col][row]);
	}
	return 0;
}
