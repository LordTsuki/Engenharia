/*
programa da idade usando dias
18/03
*/

//cabeçalho do programa
#include <stdio.h>  //std standard input output
                   //biblioteca padrão entrada e saída

#include <stdlib.h>  // std library
                    // biblioteca padrão
                   // system()
                   

#include <locale.h>  //contem configuraçoes do pais
                   
int main() // O tipo da função é inteiro
{         //retorna um valor inteiro
    
    setlocale(LC_ALL, "portuguese"); //caso o texto tenha acento, para configurar paa o idioma do PC
    
	int ano_nasc, ano_atual, idade, dias_vividos;
	printf("----------------------------\n");
	printf("feito por folena gameplays tutoriais 12\n");  // \n new line
    printf("negócio de calcular a idade lá\n");
    printf("----------------------------\n");
	
	printf("\nQual o ano atual ?\t");  //ou usa \t ou dá seis espaços
    scanf("%i" , &ano_atual); //recebe um valor no formato inteiro, e armazena no endereço ano_atual
	
	printf("\nQual o ano de nascimento ?\t");  // \t tab tabulação
    scanf("%i" , &ano_nasc); //recebe um valor no formato inteiro, e armazena no endereço ano_nasc
	
	printf("\nQual o dia do seu nascimento ?\t");
	scanf("%i" , &dias_vividos);
	
	idade = ano_atual - ano_nasc ;
    dias_vividos = idade *365;
	
	printf("\nA sua idade é de %i anos\n\n" , idade );
	printf("\nVoce viveu %i dias" , dias_vividos);
   
    return 0;  //se executa e retorna 0
              //o SO reconhece que houve SUCESSO
}

