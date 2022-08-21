#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	printf("\nDigite um numero: ");
	scanf("%i", &num);
	if(num>0)
	{
		if(num%2==0)
		    printf("\nO numero %i = par\n",num);
		else
		    printf("\nO numero %i = impar\n",num); 
	}
	else
	system("pause");
	return 0;
}
