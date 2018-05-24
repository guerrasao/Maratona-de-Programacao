#include <stdio.h>
//Desenvolvido por Patrick A. C. Guerra

int main(){
	int n=0,gInter,gGremio,vInter=0,vGremio=0,continuar=1,empates=0;
	while(continuar == 1){
		scanf("%d %d", &gInter, &gGremio);
		if(gInter == gGremio){
			empates++;
		}else{
			if(gInter > gGremio){
				vInter++;
			}else{
				if(gGremio > gInter){
					vGremio++;
				}
			}
		}
		n++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &continuar);
	}
	printf("%d grenais\n", n);
	printf("Inter:%d\n", vInter);
	printf("Gremio:%d\n", vGremio);
	printf("Empates:%d\n", empates);
	if(vInter == vGremio){
		printf("Nao houve vencedor\n");
	}else{
		if(vInter > vGremio){
			printf("Inter venceu mais\n");
		}else{
			printf("Gremio venceu mais\n");
		}
	}
return 0;
}

