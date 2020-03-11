#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,j;
	do{	
    	printf("Numero de estrella en la piramide: ");
    	scanf("%d",&a);
	}while(a<0);
	for(int i=1;i<=a;i++){
		for(int k=a;k>i-1;k--){
			printf(" ");
		}
		for(int j=1;j<i+1;j++){
			printf(" *");
		}
		printf("\n");
	}
}