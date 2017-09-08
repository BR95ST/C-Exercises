#include<stdio.h>
int main(int argc, char** argv)
{
	int a;
	do{
		scanf("%d",&a);
		if(a != 10)
			puts("Valor errado");
	}while(a != 10);

	return 0;
}