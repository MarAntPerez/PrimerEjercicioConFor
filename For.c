#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int contador;
	int contadorDos;
	
	for(contador = 0; contador <= 10; contador++){
		//printf("\n%i", contador);
		printf("\n");
		printf("\nTabla del numero %i", contador);
		for(contadorDos = 0; contadorDos<=10; contadorDos++){
			int resultado;
			resultado = contador*contadorDos;
			printf("\n%i x %i = %i", contador, contadorDos, resultado);
		}
	}
	
	return 0;
}
