#include <stdio.h>
//Desenvolvido por Patrick A. C. Guerra

int main(){
	int n,i,x,y;
	double resp;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d %d", &x, &y);
		if(y!=0){
			resp = (double) x/y;
			printf("%.1f\n",resp);
		}else{
			printf("divisao impossivel\n");
		}
	}
return 0;
}

