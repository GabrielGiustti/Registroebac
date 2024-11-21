#include <stdio.h> //biblioteca de comunicação com o usuario 
#include <stdlib.h> //bibliocteca de alocação de espaço em memória ou assentos 
#include <locale.h> //biblioteca de alocação de texto por região 
#include <string.h> // biblioteca responsavel por coisas das string 

	int Cadastrar () // Função de cadastro dos usuários  
 { 
 
 	// Inicio da criação das váriaveis/ strings 
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40]; 
	char cargo[40];
	// Final da criação das váriaveis/ strings 
	
	printf("Digite o CPF a ser cadastrado: "); // Informações do usuário 
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores das string
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo 
	fprintf(file,cpf); // salva o valor variavel 
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); 
	fprintf(file,","); 
	fclose(file); 
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a"); 
	fprintf(file,","); 
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause"); 
	
		
	
}

	int Consultar()
{

	setlocale(LC_ALL, "Portuguese"); // Definindo a linguaguem 
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Não foi possivel abrir o arquivo, não localizado!.\n");
		
	 } 
	 
	 while(fgets(conteudo, 200, file) != NULL);
	 {
	 	printf("\nEssas são as informações do usuário: ");
	 	printf("%s", conteudo);
	 	printf("\n\n");
	 	
	 }
	 
	 system("pause");
	 
}

	int Excluir()
{
	char cpf[40];
	
	printf(" Digite o CPF do usuário a ser excluido:");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	
	if(file == NULL) 
	{
	printf("O usuário não se encontra no sistema!. \n");		
	system("pause");

	}
	
	
	
	}
	


	int main()
{
	int opcao=0; // Definindo vaviáveis  
	int laco=1; 
	
	for(laco=1;laco=1;) 
	{
	
	system("cls"); // Responsável por limpar a tela 
	
	setlocale(LC_ALL, "Portuguese"); // Definindo a linguaguem 
	
	printf ("### Registro da EBAC ###\n\n"); // Incio Menu 
	printf("Escolha a opção desejada do menu:\n\n");
	printf("\t1- Cadastrar nome\n");
	printf("\t2- Consultar nome\n");
	printf("\t3- Excluir nome\n\n");
	printf("\t4- Sair do sistema\n\n");
	printf("Opção: "); // Fim da seleção 
	
	scanf("%d", &opcao); // Armazenamento de usuário 
	
	system("cls"); 
	
	switch(opcao) // Incio da seleção
	{
		case 1: 
		Cadastrar();
		break;
	
		case 2:
		Consultar();
		break;
		
		case 3: 
		Excluir(); 
		break;
		
		case 4:
		printf("Obrigado por utilizar o sistema! \n");
		return 0;
		break;
		
		default: 
		printf("Essa opção não está disponivel!\n");
		system("pause");
		break; // Final da seleção 
	}
	

}

}
	

