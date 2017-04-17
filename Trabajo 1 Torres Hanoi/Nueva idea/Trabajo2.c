#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<string.h>
#include "mov.h"
int main() {
	long int tamn=0, llam=0, opera=0;
	int n, i;
	double tiempo = 0;
	char c[20], d;
	clock_t t1, t2;
	printf("Este programa se encarga de resolver el problema de la Torre de Hanoi. Este problema consiste en pasar un numero de bloques, ordenado de forma decreciente en tamanho desde una estaca 1, hasta una estaca 3, con ayuda de otra complementaria. Un bloque de mayor tamnho nunca puede estar encima de otro de menor tamanho, pero si a la inversa \n");
	do {
		printf("\n Como quieres que se solucione el problema:\n Si lo quiere por iteracion teclee: iterativo \n Si quiere por recursividad teclee:recursividad ");
		printf("\n Si quiere salir del programa teclee: salir \n");
		gets(c);
		printf("\nVuelve a darle al intro ");
		scanf("%c", &d);
		if (!strcmp(c, "recursividad")) {
			printf("\nSolucion recursividad. Cuantos bloques hay (numero mayor que 0): ");
			do scanf("%d%c", &n, &d);
			while (n <= 0);
			t1 = clock();
			hanoirec(n,0,1,2,&llam, &opera);
			t2 = clock();
			tamn=llam*(4*(sizeof(int))+2*sizeof(long int *));
			tiempo = (double)(t2 - t1) / CLOCKS_PER_SEC;
			printf("\n El numero de movimientos es %ld y tarda %f milisegundos y ocupa %ld bytes, realizando %ld llamadas y hace %ld comparaciones u operaciones", movs(n), 1000*tiempo, tamn, llam, opera);
			llam = 0;
			opera = 0;
		}
		else {
			if (!strcmp(c, "iterativo")) { /*Lo negamos porque si la comparacion es cierta, devuelve un 0, si es falso devuelve -1*/
				printf("\n Solucion iterativa. Cuantos bloques hay (numero mayor que 0): ");
				do scanf("%d%c", &n, &d);
				while (n <= 0);
				t1 = clock();
				iterativo(n, &opera);
				t2 = clock();
				tamn=4*(sizeof(long int));
				tiempo = (double)(t2 - t1) / CLOCKS_PER_SEC;
				printf("\n El numero de movimientos es %d y tarda %f milisegundos y ocupa %d bytes haciendo solo una llamada y hace %ld comparaciones u operaciones", movs(n), 1000*tiempo, tamn, opera);
				opera = 0;
			}
			else{if (strcmp(c, "salir"))
			printf("Cadena no valida");
		  }
		}
		n = 0;
	}
while (strcmp(c,"salir"));
return 0;
}