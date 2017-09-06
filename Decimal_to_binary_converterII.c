#include <stdio.h>

int checarBits(int x){
	int cont = 0;
	
	if(x == 0 || x == 1)
		return x;	
	else
		return ++cont + checarBits(x /2); 	
}
void converterValor(int x, int y){
	int bin[y], i;
	if(x == 0)
		printf("%d", x);	
	else{
		for(i=0;i<y;i++){
			bin[i] = x % 2;
			x /= 2;
		}
		for(i=y-1;i>=0;i--){
			printf("%d", bin[i]);
		}
	}
}
int main(){
	int num;
	
	printf("Digite um numero Decimal: ");
	scanf("%d", &num);
	
	converterValor(num, checarBits(num));
	
	return 0;
}
