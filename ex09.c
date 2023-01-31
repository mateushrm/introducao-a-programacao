#include <stdio.h>

int main()
{
   float salario, taxa;
   
   scanf("%f", &salario);
   
   if(salario<=600)
   {
       printf("R$ 0.00");
   }
   if(salario>600 && salario<=1200)
   {
       taxa= salario*20/100;
       printf("R$ %.2f", taxa);
   }
   if(salario>1200 && salario<=2000)
   {
       taxa= salario*25/100;
       printf("R$ %.2f", taxa);
   }
   if(salario>2000)
   {
       taxa= salario*30/100;
       printf("R$ %.2f", taxa);
   }
    return 0;
}