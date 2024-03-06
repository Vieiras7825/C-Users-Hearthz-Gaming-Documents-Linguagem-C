#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float num1, num2, resultado;
    char op = '0';

    do
    {
        system("cls");
        //imprimindo as opções da nossa calculadora
        num1 = num2 = resultado = 0;
        printf(" (1) somar\n");
        printf(" (2) subtrair\n");
        printf(" (3) multiplicar\n");
        printf(" (4) dividir\n");
        printf(" (0) sair do programa\n");

        if(op != '0')
        {
            printf("\nInforme a operacao:\n");
            printf("\t\t\t\t>>> ");
            op = getche();
            printf("\n");

            printf("Digite o primeiro numero:\t>>>");
            scanf("%f", &num1);
            printf("Digite o segundo numero:\t>>>");
            scanf("%f", &num2);
            if(op == '1')
            {
                resultado = num1 + num2;
            }
            else
            {
                if(op == '2')
                {
                    resultado = num1 - num2;
                }
                else
                {
                    if(op == '3')
                    {
                        resultado = num1 * num2;
                    }
                    else
                    {
                        if(op == '4')
                        {
                            resultado = num1 / num2;
                        }
                    }
                }
            }
        }
        printf("\nO resultado eh: %f\t\t>>>\n", resultado);

        //system("pause");//parar o programa

        printf("\nPressione uma tecla para realizar uma nova operacao: ");
        getch();

        system("cls"); //limpar a tela
    }
    while(op != '0');

    return 0;
}

