#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    //Ordenar um vetor.
 
    int tamanho, aux;
 
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tamanho);
 
    int vetor[tamanho];
 
    for(int i=0;i<tamanho;i++)
    {
        printf("Digite o valor: ");
        scanf("%d",&vetor[i]);
    }
    for(int i=0;i<tamanho;i++)
    {
            for(int j=i+1;j<tamanho;j++)
            {
            if(vetor[i]>vetor[j])
                {
                    aux = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = aux;
                }
            }
    }
    printf("Os numeros ordenados: ");
    for(int i=0;i<tamanho;i++)
    {
        printf("%d ",vetor[i]);
    }
 
}
