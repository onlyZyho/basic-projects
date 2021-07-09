#include <stdio.h>
#include <stdlib.h>

/*

Desculpa pela falta de organização, :D.

Foi mal por não usar conio... meu compilador veio sem nada... preguiça de baixar :D.

Esse programa só vai funcionar no windows, muitos comandos vão dar erro no linux.

Ia fazer um sistema de bem-vindo mas tinha mais de 20 linhas, e é um projeto básico.

*/

int main(void) {

	float num1;
	float num2;


    // SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
    system("color 5");
    printf("Este projeto faz parte de uma serie de projetos basicos que irei postar no github.");
	system("timeout /t 5 /nobreak > nul"); // Timeout de 5 segundos, obs: só funciona no windows.
	system("cls"); // Limpando prompt de comando, obs: só funciona no windows.

	printf("Por favor, digite um numero: ");
	scanf("%f", &num1);
	printf("Por favor, digite outro numero: ");
	scanf("%f", &num2);


	system("cls && color b");

    printf("Adicao: %f", num1 + num2);
    printf("\nSubtracao: %f", num1 - num2);
    printf("\nDivisao: %f", num1 / num2);
    printf("\nMultiplicacao: %f", num1 * num2);


	return 0;

}
