#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>

int main() {
	setlocale(LC_ALL,"");
	
	double aluno[5][4];
	int op, op2, num;
	
	
	printf("Seja bem vindo \n");
	printf("Escolha uma opção \n");
	printf("0 - Registrar alunos \n");
	printf("1 - Sair \n");
	scanf("%i", &op);
	 
	if (op == 0) {
	for(int aluno_id = 0; aluno_id < 5; aluno_id++) {
	printf("Aluno %i \n", aluno_id);
		
		for (int nota_id = 0; nota_id < 4; nota_id++) {
			scanf("%lf", &aluno[aluno_id][nota_id]);	
		}
		
		double soma = (aluno[aluno_id][0] + aluno[aluno_id][1] + aluno[aluno_id][2] + aluno[aluno_id][3]) / 4;
		
		if (soma <= 4) {
		printf("a nota é %lf \n ", soma);
		printf("Reprovado \n");	
		} else if (soma < 6 && soma >= 5){
			
			printf("a nota é %lf \n ", soma);
			printf ("Recuperação \n");
		} else if (soma > 6){
			printf("a nota é %lf \n ", soma);
			printf("Aprovado!!! \n");
	    	}
		
       	} 
      } else if (op == 1){
     	printf("Acabou");
    	return(0);
      }
      
      if (op == 2) {
      	 printf("Escreva o número referente ao aluno \n");
      	 scanf("%i", &num);
      	for (int nota_id = 0; nota_id < 4; nota_id++) {
			scanf("%lf", &aluno[num][nota_id]);	
		}
		
      	 
	  }
	 printf("oque deseja fazer agr? \n");
	 printf("1 - sair \n");
	 printf("2 - Reescrever \n");
	 scanf("%i", &op2);
	 
	  if (op2 == 1 ) {
	  	return(0);
	  } else if(op2 == 2)  {
      	 printf("Escreva o número referente ao aluno \n");
      	 scanf("%i", &num);
      	for (int nota_id = 0; nota_id < 4; nota_id++) {
			scanf("%lf", &aluno[num][nota_id]);	
			double soma = (aluno[num][0] + aluno[num][1] + aluno[num][2] + aluno[num][3]) / 4;
		}
	} else{
		printf("Erro, opção invalida");
	}
	 


	
	return(0);
	
}
