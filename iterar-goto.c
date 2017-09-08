#include <stdio.h>

int main(int argc, char** argv)
{
	int vet[5], cont = 0;
	
	iterar:
	vet[cont] = cont + 1;	
	if(++cont < 5)
		goto iterar;
	
	exibir:	
	if(--cont >= 0){	  
	   printf("%d\n", vet[cont]); 	   			
       goto exibir;	
	}
	return 0;
}