#include <stdio.h>

int verificarValor(){
	int temp;
	scanf("%d",&temp);
	if(temp == 10)
		return temp;
	else 
		return verificarValor();
		
}	
int main(int argc, char** argv)
{
	int a;
	a = verificarValor();
	printf("%d", a);
	return 0;
}