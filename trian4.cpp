#include<stdio.h>
#include <iostream>
int main(){
    int a=0;
	scanf("%d",&a);
	for(int i=a;i>0;i--){
			for(int j=a;j>i;j--){
                    printf(" ","*");
                    }
                    for(int f=0;f<i;f++){
                            printf("*");
                            }
                            printf("\n");
                    }
                    
                    printf("PAUSE");
}
