#include <stdio.h>
#include<iostream>

int main(){
    int a=0;
    scanf("%d",&a);
    int n;
    for(int i=0;i<a;i++){
            for(int j=i;j<a;j++){
                    printf(" "); 
                    }
                    n=i;
                    while(n>=0){
                                printf("*");
                                n--;
                                }
                                printf("\n");
                    }
                    system("PAUSE");
    } 
