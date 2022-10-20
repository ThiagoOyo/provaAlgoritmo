#include<stdio.h>
#include<math.h>




int main (){
	char letraQuestao;
	float a, b, hipotenusa, hipotenusaAoQuadrado, seno;
	char obra[30]; 
	int mesInicio, mesTermino, situacao; 
	
	printf("Algoritmo e Programacao\n");
	printf("Joyce Siqueira\n");
	printf("Thiago Oyo Valentim\n");
	printf("Matricula\n");
	printf("Analise e Desenvolvimento de Sistemas\n");
	printf("https://github.com/ThiagoOyo/provaAlgoritmo.git\n");
	printf("DevC++\n");
	
	
	printf("Digite a letra da questao desejada (A, B ou C): ");
	scanf("%c", &letraQuestao);
	
	switch (letraQuestao) {
		case 'A':
			printf("Escolheu opcao A\n");
			
			printf("Digite o valor de a: "); //cateto oposto
			scanf("%f", &a);
			printf("Digite o valor de b: "); //cateto adjacente
			scanf("%f", &b);
			
			hipotenusaAoQuadrado = pow(a, 2) + pow(b, 2);
			hipotenusa = sqrt(hipotenusaAoQuadrado) ;
			seno = a / hipotenusa;
			
			printf("Hipotenusa: %.3f\n", hipotenusa);
			printf("Seno: %.3f", seno);
			
			
			break;
			
		case 'B':
			printf("Opcao Invalida!");
			break; 
			
		case 'C':
			printf("Escolheu a opcao C\n");
			
			printf("Digite o nome da obra: ");
			scanf("%s", &obra);
			printf("Digite o mes de inicio: ");
			scanf("%d", &mesInicio);
			printf("Digite o mes do termino: ");
			scanf("%d", &mesTermino);
			printf("Digite o codigo referente a situacao: ");
			scanf("%d", &situacao);
			printf("Nome da obra: %s\n", obra);
			printf("Tempo de execucao: %d meses\n", mesTermino - mesInicio);
			
			switch (situacao){
				case 1: 
					printf("Situacao: Obra Concluida");
					break;
				case 2:
					printf("Situacao: Problemas no Projeto");
					break;
				case 3:
					printf("Situacao: Atraso nos repasses financeiros");
					break;
				case 4:
					printf("Situacao: Greve dos trabalhadores");
					break;
				case 5:
					printf("Situacao: Falta de materiais");
					break;
				case 6:
					printf("Situacao: Falta de equipamentos");
					break;
				default: 
					printf("Codigo Inexistente!");
					break;	
				
			}
			
			
			
			break;
			
		default: 
			printf("Opcao Invalida!");
			break;		
	} 
	
	
	
	
	
	
	
	
	
}
