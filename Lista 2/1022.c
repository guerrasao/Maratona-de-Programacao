#include <stdio.h>
//Desenvolvido por Patrick A. C. Guerra
int mdc(int a, int b){
	int r;
	while (b != 0){
       r = a % b;
       a = b;
       b = r;
	}
	return a;
}
int main(){
	int 
		i, n,
		n1, d1,
		n2, d2, 
		saidaInicialNumerador, 
		saidaInicialDenominador,
		saidaSimplificadaNumerador,
		saidaSimplificadaDenominador,
		maiorDivisorComum
	;
	char 
		operacao, 
		barra1, 
		barra2
	;
	//Numero de linhas com entradas
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		scanf("%d %c %d %c %d %c %d",&n1,&barra1,&d1,&operacao,&n2,&barra2,&d2);
		if(operacao == '+'){
			saidaInicialNumerador = (n1*d2)+(n2*d1);
			saidaInicialDenominador = d1*d2;
		}
		else if(operacao == '-'){
			saidaInicialNumerador = (n1*d2)-(n2*d1);
			saidaInicialDenominador = d1*d2;
		}
		else if(operacao == '*'){
			saidaInicialNumerador = n1*n2;
			saidaInicialDenominador = d1*d2;
		}
		else if(operacao == '/'){
			saidaInicialNumerador = n1*d2;
			saidaInicialDenominador = n2*d1;
		}
		
		maiorDivisorComum = mdc(saidaInicialNumerador,saidaInicialDenominador);
		saidaSimplificadaNumerador = saidaInicialNumerador / maiorDivisorComum;
		saidaSimplificadaDenominador = saidaInicialDenominador / maiorDivisorComum;
		//verifica se trocou o sinal
		if((saidaInicialNumerador < 0 && saidaSimplificadaNumerador > 0) || (saidaInicialNumerador > 0 && saidaSimplificadaNumerador < 0)){
			saidaSimplificadaNumerador *=-1;
		}
		if((saidaInicialDenominador < 0 && saidaSimplificadaDenominador > 0) || (saidaInicialDenominador > 0 && saidaSimplificadaDenominador < 0)){
			saidaSimplificadaDenominador *=-1;
		}
		//testes saidas
		//printf("%d %c %d %c %d %c %d\n",n1,barra1,d1,operacao,n2,barra2,d2);
		printf("%d/%d = %d/%d\n",saidaInicialNumerador,saidaInicialDenominador,saidaSimplificadaNumerador,saidaSimplificadaDenominador);
	}
	return 0;
}

