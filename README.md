Programando en c++
==================

Dibujar triángulos en lenguaje c++
Hola Mundo
#include <stdio.h>
int main(){
    printf("Hola mundo");
    return 0;
}


--Triangulos

*
**
***
****
*****
#include <stdio.h>
#include <iostream.h>
int main(){
    int a, i ,j;
    scanf("%d",&a);
    for(i=0;i<a;i++){
                     for(j=0;j<=i;j++){
                                       printf("*");
                                       }
                                       printf("\n");
                     }
                     system("PAUSE");
    }
    
    
*****
****
***
**
*
#include <stdio.h>
#include <iostream>
int main(){
    int a=0;
    scanf("%d",&a);
    int n;
    for(int i=0;i<a;i++){
            for(int j=i;j<a;j++){
                    printf("*");
                    }
                    printf("\n");
                    }
                    system("PAUSE");
    }
    
    
    *
   **
  ***
 ****
*****
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
