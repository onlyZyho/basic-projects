#include <stdio.h>
#include <stdlib.h>

/*

Desculpa pela falta de organiza��o, :D.

Foi mal por n�o usar conio... meu compilador veio sem nada... pregui�a de baixar :D.

Esse programa s� vai funcionar no windows, muitos comandos v�o dar erro no linux.

Ia fazer um sistema de bem-vindo mas tinha mais de 20 linhas, e � um projeto b�sico.

*/

int main(void) {

	float num1;
	float num2;


    // SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
    system("color 5");
    printf("Este projeto faz parte de uma serie de projetos basicos que irei postar no github.");
	system("timeout /t 5 /nobreak > nul"); // Timeout de 5 segundos, obs: s� funciona no windows.
	system("cls"); // Limpando prompt de comando, obs: s� funciona no windows.

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
