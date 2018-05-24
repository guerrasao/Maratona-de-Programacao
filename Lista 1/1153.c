#include <stdio.h>
//Desenvolvido por Patrick A. C. Guerra

int main(){
	int f=1,i,x,n;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		f*=i;
	}
	printf("%d\n",f);
return 0;
}

