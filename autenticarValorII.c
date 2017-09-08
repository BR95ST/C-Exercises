#include<stdio.h>

int main(int argc, char** argv)
{
	int a;
	
	inicio:
	scanf("%d",&a);
	if(a != 10)
		goto inicio;
	printf(":)");
	return 0;
}