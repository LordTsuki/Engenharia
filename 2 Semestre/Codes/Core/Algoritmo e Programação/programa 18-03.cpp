/*
programa da idade usando dias
18/03
*/

//cabe�alho do programa
#include <stdio.h>  //std standard input output
                   //biblioteca padr�o entrada e sa�da

#include <stdlib.h>  // std library
                    // biblioteca padr�o
                   // system()
                   

#include <locale.h>  //contem configura�oes do pais
                   
int main() // O tipo da fun��o � inteiro
{         //retorna um valor inteiro
    
    setlocale(LC_ALL, "portuguese"); //caso o texto tenha acento, para configurar paa o idioma do PC
    
	int ano_nasc, ano_atual, idade, dias_vividos;
	printf("----------------------------\n");
	printf("feito por folena gameplays tutoriais 12\n");  // \n new line
    printf("neg�cio de calcular a idade l�\n");
    printf("----------------------------\n");
	
	printf("\nQual o ano atual ?\t");  //ou usa \t ou d� seis espa�os
    scanf("%i" , &ano_atual); //recebe um valor no formato inteiro, e armazena no endere�o ano_atual
	
	printf("\nQual o ano de nascimento ?\t");  // \t tab tabula��o
    scanf("%i" , &ano_nasc); //recebe um valor no formato inteiro, e armazena no endere�o ano_nasc
	
	printf("\nQual o dia do seu nascimento ?\t");
	scanf("%i" , &dias_vividos);
	
	idade = ano_atual - ano_nasc ;
    dias_vividos = idade *365;
	
	printf("\nA sua idade � de %i anos\n\n" , idade );
	printf("\nVoce viveu %i dias" , dias_vividos);
   
    return 0;  //se executa e retorna 0
              //o SO reconhece que houve SUCESSO
}

