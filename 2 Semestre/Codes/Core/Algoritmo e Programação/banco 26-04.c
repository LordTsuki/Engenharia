#include <stdlib.h>
#include <stdio.h>

int main()
{
int op;
float saldo,valor;
	printf("\nBanco FACENS\n\n");
	printf("\nSaldo inicial (reais): ");
		scanf("%f", &saldo);
		fflush(stdin);
	do
	{
		system("cls");
		printf("\nMenu:\n\n[1]Depositar\n[2]Retirar\n[3]Sair\n\nOpcao: ");
			scanf("%i", &op);
			fflush(stdin);
				if(op==1 || op==2)
	 		{
	 		printf("\nDigite o valor (reais): ");
	 		scanf("%f", &valor);
	 			fflush(stdin);
		 		}
	switch(op)
		{
		case 1: saldo+=valor; //saldo=saldo+valor
				printf("\nSaldo atual = %.2f\n",saldo);
				break;
		case 2: saldo-=valor; //saldo=saldo-valor
				printf("\nSaldo atual = %.2f\n",saldo);
				break;
		case 3: printf("\nVolte sempre!!\n");
				break;
	   default: printf("\nOpcao invalida\n");
			}
			system("pause");
		}while(op!=3);
				if(saldo==0)
					printf("\nConta zerada\n\n");	
				else if(saldo<0)
					printf("\nConta estourada\n\n");
				else
					printf("\nConta preferencial\n\n");
		return 0;
	}
