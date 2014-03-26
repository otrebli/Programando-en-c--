#include <stdio.h>
int hanoi(int n){
		if(n==1)
			return 1;
		else
			return 2*hanoi(n-1)+1;
		
	}
int main(){
	int a;
	printf("Numero de discos: ");
	scanf("%d",&a);
	
	printf("Numero de movimientos: %d\n", hanoi(a));
	return 0;
}
