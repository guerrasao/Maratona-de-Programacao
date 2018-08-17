#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Desenvolvido por Patrick A. C. Guerra

int main(){
	int n,i,j,k,tamanhoStringLinha=0,intCharTemp,contadorMetadeString;
	char charTemp,StringLinha[1001],StringAuxiliar[1001];
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		//leitura da linha até a quebra de linha
		scanf(" %[^\n]s",StringLinha);
		//Le tamanho da string
		tamanhoStringLinha = strlen(StringLinha);
		//le o caractere \n do buffer que foi deixado pelo scanf
		scanf("%c",&charTemp);
		
		/*(nao usado) metodo de leitura anterior
		//limpeza de buffer do teclado alternativo a deixar um espaco antes da % no scanf
		setbuf(stdin, NULL);
		scanf("%c",&charTemp);
		while(charTemp != '\n'){
			StringLinha[tamanhoStringLinha] = charTemp;
			tamanhoStringLinha++;
			scanf("%c",&charTemp);
		}
		StringLinha[tamanhoStringLinha] = '\0';
		*/
		
		//1 procesamento - letras minusculas e maiusculas devem ser deslocadas 3 posicoes para a direita:
		//Verificou-se a posicao ou representacao decimal (inteiro) dos caracteres na tabela ASCII
		for(j = 0; j < tamanhoStringLinha; j++){
			//cast para transformar char em representacao inteiro
			intCharTemp = (int)StringLinha[j];
			//Nas posicoes 65 ate 90 e 97 ate 122 estao as letras
			if(	(intCharTemp >= 65 && intCharTemp <= 90) ||
				(intCharTemp >= 97 && intCharTemp <= 122) ){
				intCharTemp = intCharTemp+3;
				StringLinha[j] = (char)intCharTemp;
			}
		}
		
		//2 processamento - inverter string com uso de Auxiliar
		k = 0;
		//leitura do final da string para o inicio
		for(j = tamanhoStringLinha-1; j >= 0; j--){
			StringAuxiliar[k] = StringLinha[j];
			k++;
		}
		//insere caractere de final da string
		StringAuxiliar[k] = '\0';
		//copia a string auxiliar invertida para a atual
		strcpy(StringLinha,StringAuxiliar);
		
		//3 todo e qualquer caractere a partir da metade em diante (truncada) devem ser deslocados 
		//uma posição para a esquerda na tabela ASCII
		contadorMetadeString = (int)tamanhoStringLinha/2;
		for(j = contadorMetadeString; j < tamanhoStringLinha; j++){
			//desloca um caractere a esquerda
			StringLinha[j] = (char)((int)StringLinha[j] - 1);
		}
		
		//exibir linha codificada
		printf("%s\n",StringLinha);
	}
	return 0;
}

