#include <stdio.h>
//Desenvolvido por Patrick A. C. Guerra

int main(){
	int n=0;
	float nota,resp=0;
	while(n<2){
		scanf("%f", &nota);
		if(nota >= 0 && nota <= 10){
			resp += nota;
			n++;
		}else{
			printf("nota invalida\n");
		}
	}
	resp = resp/2;
	printf("media = %.2f\n", resp);
return 0;
}

