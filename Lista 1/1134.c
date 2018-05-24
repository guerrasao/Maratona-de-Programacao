#include <stdio.h>
//Desenvolvido por Patrick A. C. Guerra

int main(){
	int alcool=0, gasolina=0, diesel=0, x;
	scanf("%d", &x);
	while(x != 4){
		if(x == 1)
			alcool++;
		else if(x == 2)
			gasolina++;
		else if(x == 3)
			diesel++;
		scanf("%d", &x);
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);
return 0;
}

