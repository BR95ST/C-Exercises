#include<stdio.h>

void main()
{
    //This converter uses how many bits it takes to convert a number from decimal to binary.
    int dec, aux=0, temp1=2, temp2, i=0;
    printf("Enter the Decimal number: ");
    scanf("%d",&dec);
    temp2 = dec;
 
    //While count how many times the number has been divided by two, to know how many bits the number can be represented.
    while(temp1>1)
    {
        temp1 = temp2/2;
        temp2 = temp1;
        aux++;
    }
    temp1 = 0;
    int bin[aux];
    while(temp1<=aux)
    {
        bin[temp1] = dec%2;
        dec = dec/2;
        temp1++;
    }
    for(i=temp1-1;i>=0;i--)
    {
        printf("%d",bin[i]);
    }
 
}
