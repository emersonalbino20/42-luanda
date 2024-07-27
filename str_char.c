#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int tamanhoString(char string[]);
	char stringUsuario[20];
	write(1,"Informe uma palavra:\n", 21);
	scanf("%s", stringUsuario);
	
	int size = tamanhoString(stringUsuario);
	printf(" O tamanho de caracteres incluindo o nulo e %i \n", size);
	
	return 0;
}
int tamanhoString(char string[])
{
	int numCaracteres = 0;
	
	while(string[numCaracteres] != '\0')
	{
		numCaracteres++;
	}
	
	printf(" Quantidade de letras digitadas e %i \n", numCaracteres);
	int nulo = ++numCaracteres;

	if(string[nulo] == '\0')
	{
		write(1,"igual\n",6);
		
	}
	
	return nulo;
}
