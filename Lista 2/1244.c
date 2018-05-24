#include <stdio.h>
#include <stdlib.h>
//Desenvolvido por Patrick A. C. Guerra
typedef struct strString{
	char string[51];
	int tamanhoString;
	size_t ordem;
}TipoString;

typedef struct linha{
	TipoString vetLinha[50];
	int contStringsLinha;
}TipoLinha;

typedef struct extra{
	TipoString* vetLinha[50];
}TipoExtra;

/*
void quicksort(TipoString* values[], int begin, int end, int posicaoInicial[]){
	int i, j, pivo;
	TipoString* aux;
	i = begin;
	j = end-1;
	pivo = values[(begin + end) / 2]->tamanhoString;
	while(i <= j){
		while(values[i]->tamanhoString > pivo && i < end){
			i++;
		}
		while(values[j]->tamanhoString < pivo && j > begin){
			j--;
		}
		if(i <= j){
			if(values[i]->tamanhoString == values[j]->tamanhoString && posicaoInicial[i] < posicaoInicial[j]){
				i++;
				j--;	
			}else{
				aux = values[i];
				values[i] = values[j];
				values[j] = aux;
				i++;
				j--;
			}
		}
	}
	if(j > begin){
		quicksort(values, begin, j+1, posicaoInicial);
	}
	if(i < end){
		quicksort(values, i, end, posicaoInicial);
	}
}

int compare_name_stable(const void *a, const void *b)
{
    struct person *pa = (struct person *) a;
    struct person *pb = (struct person *) b;
    int last = strcmp(pa->last, pb->last);
    if (last != 0)
        return last;
    int first = strcmp(pa->first, pb->first);
    if (first != 0)
        return first;
    return pa->order - pb->order;
}

crescente
int compare_stable(const void *a, const void *b)
{
    TipoString * valorA = (TipoString*) a;
    TipoString * valorB = (TipoString*) b;
    int indice = valorA->tamanhoString - valorB->tamanhoString;
    //int age = pa->age - pb->age;
    return indice != 0 ? indice : valorA->ordem - valorB->ordem;
}
*/

int compare_stable(const void *a, const void *b)
{
    TipoString * valorA = (TipoString*) a;
    TipoString * valorB = (TipoString*) b;
    int indice = valorA->tamanhoString - valorB->tamanhoString;
    //int age = pa->age - pb->age;
    return indice != 0 ? indice : valorB->ordem - valorA->ordem;
}


int main(){
	int i,n,j;
	char c;
	scanf("%d", &n);
	TipoLinha linhas[n];
	TipoExtra ordem[n];
	for(i=0; i<n; i++){
		linhas[i].contStringsLinha = 0; 
	}
	for(i=0; i<n; i++){
		scanf("%s",linhas[i].vetLinha[ linhas[i].contStringsLinha ].string);
		linhas[i].vetLinha[ linhas[i].contStringsLinha ].tamanhoString = strlen((char*)linhas[i].vetLinha[ linhas[i].contStringsLinha ].string);
		linhas[i].contStringsLinha = linhas[i].contStringsLinha + 1;
		scanf("%c",&c);
		while(c!='\n'){
			scanf("%s",linhas[i].vetLinha[ linhas[i].contStringsLinha ].string);
			linhas[i].vetLinha[ linhas[i].contStringsLinha ].tamanhoString = strlen((char*)linhas[i].vetLinha[ linhas[i].contStringsLinha ].string);
			linhas[i].contStringsLinha = linhas[i].contStringsLinha + 1;
			scanf("%c",&c);
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<linhas[i].contStringsLinha; j++){
			ordem[i].vetLinha[j] = &linhas[i].vetLinha[j];
			linhas[i].vetLinha[j].ordem = j;
		}
	}
	for(i=0; i<n; i++){
		//quicksort(ordem[i].vetLinha, 0, linhas[i].contStringsLinha, ordem[i].posicaoIncial);
		qsort(ordem[i].vetLinha[0], linhas[i].contStringsLinha, sizeof(TipoString), compare_stable);
	}
	for(i=0; i<n; i++){
		for(j=linhas[i].contStringsLinha-1; j>=0; j--){
			if(j!=0){
				printf("%s ",ordem[i].vetLinha[j]);
			}else{
				printf("%s",ordem[i].vetLinha[j]);
			}
		}
		printf("\n");
	}
	/*char string[51];
	scanf("%s",string);
	printf("%s ",string);
	char string2[51],cc;
	scanf("%s",string2);
	printf("%s ",string2);
	scanf("%c",&cc);
	if(cc=='\n')
	printf("nova linha");*/
return 0;
}

