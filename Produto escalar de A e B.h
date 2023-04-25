#include<stdio.h>
int main()
{
 int B[10], C[10], i, produto=0;

 for(i=0; i<10; i++)
 {
 printf("Qual o valor de B[%d]?\n ", i);
 scanf("%d", &B[i]);
 }
 for(i=0; i<10; i++)
 {
 printf("Qual o valor de B[%d]?\n ", i);
 scanf("%d", &C[i]);
 }

 for(i=0; i<10; i++)
 produto= produto + B[i]* C[i];


 printf("\nO produto escalar de B e C vale:%d ", produto);
}
