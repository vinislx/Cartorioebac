#include <stdio.h>  //biblioteca de comunica��o com o usu�rio
#include <stdlib.h>  //biblioteca de aloca��o de espa�o de memoria
#include <locale.h>  //biblioteca de aloca��o de texto por regi�o 
#include <string.h>  //biblioteca respons�vel por cuidar das string

int registro()  //Fun��o responsavel por cadastra o susu�rios no s�stema
{
	//inicio cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da cria��o 
	
	printf("Digite o CPF a ser cadastrato: ");  // coletamdo informa��o do usu�rio
	scanf("%s", cpf);  //refere-se as string "armazenamento de informa��o"
	
	strcpy(arquivo, cpf);
	
	FILE *file;  //criar o arquivo 
	file = fopen(arquivo, "w");  //cria o arquivo e o "w" significa escrever
	fprintf(file, cpf);  //salvo o valor da vari�vel 
	fclose(file);  // fecha a vari�vel 
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);// fim CPF
	
	printf("Digite o nome a ser cadastrado: ");  //inicio nome 
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");  //inicio sobrenome
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);//Fim sobrenome
	
	printf("Digite o cargo a ser cadastrado: ");  //inicio cargo
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);  //fim cargo
	
}
int consulta()
{
	setlocale(LC_ALL, "portuguese");
	
	char cpf[40];
	char conteudo [200];
	
	printf("Digite o cpf a ser consutado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");  //"r" significa registar
	
	if(file == NULL)
	{
		printf("N�o foi possivel abir o arquivo, n�o localizado!\n ");
	}
	
	while(fgets(conteudo, 200, file) !=NULL)
	{
		printf("Essas s�o as informa��es do usu�rio");
		printf("%s", conteudo);
		printf("\n\n");	
	}
	
	system("pause");
}

int deletar()
{
	char cpf [40];
	
	printf("Digite o CPF a ser deletado");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "R");
	
	if (file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!\n");
		system("pause");
	}	
}
  
int main()

	{
	 int opcao=0;  //definindo vari�veis
	 int laco=1;
	 char senhadigitada[10]="a";
	 int comparacao;
	
	printf("### Cart�rio de EABC ###\n\n");
	printf("login de adminstrador!\n\nDigite a sua senha: ");
	scanf("%s", senhadigitada);
	
	comparacao = strcmp(senhadigitada, "admin");
	
	system("cls");
	if(comparacao == 0)
	
		{
		for(laco=1;laco=1;)
			{
	
			system("cls");
	
			setlocale(LC_ALL, "portuguese");
	
			printf("### Cart�rio de EABC ###\n\n");
			printf("Escolha a opi��o desejada do menu:\n\n");
			printf("\t1 - Registra nomes\n");
			printf("\t2 - Consultar nomes\n");
			printf("\t3 - Deletar nomes\n\n");
			printf("\t4 - Sair do programa\n\n");
			printf("Opi��o: ");  //Fim do menu 
	
			scanf("%d", &opcao);  //Armazenando a escola do usu�rio
	
			system("cls");  // limpar tela de execu��o 
			
			switch(opcao)  //Inicio de sele��o 
				{
				case 1:
				registro(); //clamadas de fun��es 
				break;  //fim da execu��o do comando 
			
				case 2:
				consulta();  // clamadas do consutar 
				break;  //fim da execu��o do comando 
			
				case 3:  //clamadas de deletar 
				deletar();
				break;  //fim da execu��o do comando 
			
				case 4: //clamadas de deletar 
				printf("Obrigado por ultilizar o programa");
				return 0;
				break;  //fim da execu��o do comando 
			
				default: // incers�o de variavel invalido 
				printf("Essa op��o n�o est� dispon�vel\n");
				system("pause");
				break; //fim da execu��o do comando 
				}  //Fim de sele��o
		
			}
		}
		else
		printf("Senha incorreta");	
	} 
