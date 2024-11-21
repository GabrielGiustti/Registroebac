#include <stdio.h> //biblioteca de comunica��o com o usuario 
#include <stdlib.h> //bibliocteca de aloca��o de espa�o em mem�ria ou assentos 
#include <locale.h> //biblioteca de aloca��o de texto por regi�o 
#include <string.h> // biblioteca responsavel por coisas das string 

	int Cadastrar () // Fun��o de cadastro dos usu�rios  
 { 
 
 	// Inicio da cria��o das v�riaveis/ strings 
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40]; 
	char cargo[40];
	// Final da cria��o das v�riaveis/ strings 
	
	printf("Digite o CPF a ser cadastrado: "); // Informa��es do usu�rio 
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
		printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
		
	 } 
	 
	 while(fgets(conteudo, 200, file) != NULL);
	 {
	 	printf("\nEssas s�o as informa��es do usu�rio: ");
	 	printf("%s", conteudo);
	 	printf("\n\n");
	 	
	 }
	 
	 system("pause");
	 
}

	int Excluir()
{
	char cpf[40];
	
	printf(" Digite o CPF do usu�rio a ser excluido:");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	
	if(file == NULL) 
	{
	printf("O usu�rio n�o se encontra no sistema!. \n");		
	system("pause");

	}
	
	
	
	}
	


	int main()
{
	int opcao=0; // Definindo vavi�veis  
	int laco=1; 
	
	for(laco=1;laco=1;) 
	{
	
	system("cls"); // Respons�vel por limpar a tela 
	
	setlocale(LC_ALL, "Portuguese"); // Definindo a linguaguem 
	
	printf ("### Registro da EBAC ###\n\n"); // Incio Menu 
	printf("Escolha a op��o desejada do menu:\n\n");
	printf("\t1- Cadastrar nome\n");
	printf("\t2- Consultar nome\n");
	printf("\t3- Excluir nome\n\n");
	printf("\t4- Sair do sistema\n\n");
	printf("Op��o: "); // Fim da sele��o 
	
	scanf("%d", &opcao); // Armazenamento de usu�rio 
	
	system("cls"); 
	
	switch(opcao) // Incio da sele��o
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
		printf("Essa op��o n�o est� disponivel!\n");
		system("pause");
		break; // Final da sele��o 
	}
	

}

}
	

