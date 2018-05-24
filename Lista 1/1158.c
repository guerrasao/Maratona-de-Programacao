#include <stdio.h>
//Desenvolvido por Patrick A. C. Guerra

int main(){
	int n,i,j,x,y,c,soma;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d %d", &x, &y);
		if(x % 2 == 0){
			x++;	
		}
		c = x;
		soma = x;
		for(j=0; j<y-1; j++){
			c+=2;
			soma+=c;
		}
		printf("%d\n", soma);	
	}
return 0;
}

