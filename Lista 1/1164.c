#include <stdio.h>
//Desenvolvido por Patrick A. C. Guerra

int main(){
	int n,x,i,j,c;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &x);
		c=0;
		for(j=1; j<x; j++){
			if(x % j == 0){
				c+=j;
			}
		}
		if(c == x){
			printf("%d eh perfeito\n",x);
		}else{
			printf("%d nao eh perfeito\n", x);
		}
	}
return 0;
}

