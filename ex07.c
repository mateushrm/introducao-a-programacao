#include <stdio.h>

int main()
{
    float peso, altura, imc;
    scanf("%f%f", &peso, &altura);
    
    imc = peso/(altura*altura);
    
    if(imc<18.5)
    {
        printf("IMC = %.2f Abaixo do Peso", imc);
    }
    if(18.5 <= imc && imc < 25)
    {
        printf("IMC = %.2f Peso Normal", imc);
    }
    if(25 <= imc && imc < 30)
    {
        printf("IMC = %.2f Acima do Peso", imc);
    }
    if(imc >= 30)
    {
        printf("IMC = %.2f Obesidade", imc);
    }
    return 0;
}