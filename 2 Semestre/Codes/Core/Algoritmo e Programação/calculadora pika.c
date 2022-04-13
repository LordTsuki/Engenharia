#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float n1, n2;
	char op;
	printf ("\nCalculadora muito pika foda imensamnete foda 2.0");
printf("\nDigite um numero: ");
	scanf("%f", &n1);
	    fflush(stdin);
printf("\nDigite um sinal +,-,*,/,^: ");
	scanf("%c", &op);
printf("\nDigite outro numero");
	scanf("%f", &n2);
	    fflush(stdin);
	switch(op)
	{
	case '+': printf("\nResultado: %.2f\n\n",n1+n2);
		break;
	case '-': printf("\nResultado: %.2f\n\n",n1-n2);
		break;
	case '*': printf("\nResultado: %.2f\n\n",n1*n2);
		break;
	case '/': if(n2!=0)
		    printf("\nResultado: %.2f\n\n",n1/n2);
		else
		    printf("\nNao da pra dividir por zero seu mongol\n\n");
		break;
	case '^': printf("\nResultado: %.2f\n\n",pow(n1,n2));
	    break;
	default: printf("\nOperador invalido\n\n");
    }
    return 0;
}
    
