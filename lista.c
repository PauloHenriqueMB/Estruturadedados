#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct alunos{
	char nome[20];
	int idade;
	struct alunos proximoAluno;
}alunos;


typedef alunos *alunoPtr;

void insere (alunoPtr *alInicial, char n[], int i);
void imprime (alunoPtr alAtual);


int main(){
	alunoPtr pAluno = NULL;
	int id = 0 , op = 0;
	char nom [20];
	
	while(op !=3){
		printf("Escolha uma opcao\n");
		printf(" 1- insere novo aluno\n");
		printf(" 2- Imprime lista\n");
		printf(" 3- Sair\n");
		scanf("%d",&op);
		system("cls");
		if (op == 1){
			printf("Informe o nome do Aluno \n");
			scanf("%n",&nom);
			fflush(stdin);
			printf("Informe a idade do aluno \n");
			scanf("%d",&id);
			system(cls);
			insere(&pAluno, nom, id);
			
		}else if (op ==2){
			imprime(pAluno);
		}
	}
	
	
	system("pause");
	return 0;
	
}   

void insere(alunoPtr *alInicial, char n[], int i){
	alunoPtr novoAluno, alunoAnterior, alunoAtual;
	
	novoAluno =(alunoPtr) malloc(sizeof(alunos));
	
	// linha errada // novoAluno -> nome = n;
	strcpy(novoAluno -> nome, n);
	novoAluno ->proximoAluno = NULL;
	
	alunoAnterior = NULL;
	alunoAtual    = *alInicial;
	
	if (novoAluno != NULL){
		
	}
}