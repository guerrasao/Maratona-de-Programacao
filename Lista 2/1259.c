#include <stdio.h>
//Desenvolvido por Patrick A. C. Guerra

int comparador(int* valor1, int* valor2){
    if ( *valor1 > *valor2 ){
        return 1;
    }else{
        if( *valor1 == *valor2 ){
            return 0;
	    }else{
	        if ( *valor1 < *valor2 ){
	        	return -1;
	        }		
		}
	}
}

int main(){
	int n,i,contPar=0,contImpar=0,entrada,j,aux;
	scanf("%d", &n);
	int par[n],impar[n];
	for(i=0; i<n; i++){
		scanf("%d", &entrada);
		if(entrada % 2 == 0){
			par[contPar++] = entrada;
		}else{
			impar[contImpar++] = entrada;
		}
	}
	qsort(par, contPar, sizeof(int), comparador);
	qsort(impar, contImpar, sizeof(int), comparador);
	for(i=0; i<contPar; i++){
		printf("%d\n",par[i]);
	}
	for(i=contImpar-1; i>=0; i--){
		printf("%d\n",impar[i]);
	}
	return 0;
}

