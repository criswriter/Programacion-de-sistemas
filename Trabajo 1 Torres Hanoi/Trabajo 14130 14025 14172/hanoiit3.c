#include <stdio.h>
#include "mov.h"
void iterativo(long int n, long int *ops){/*Resoluci�n iterativa de las torres de Hanoi, donde n es el n�mero de bloques*/
 long int x,a,b; 
 printf("\n");
 (*ops)++;/*N�umero e operaciones a realizar*/
 for (x = 1; x < (1 << n); x++){
	 (*ops)=(*ops)+2;/*Una por la comparaci�n en el if y otra por la comparaci�n  de x< (1 << n)*/
     if(n%2){
		 printf( "mover disco de la estaca %i a la estaca %i\n",(x&x-1)%3, ((x|x-1)+1)%3 );
	 (*ops) = (*ops) + 7;}/*se hacen 7 operaciones en (x&x-1)%3, ((x|x-1)+1)%3*/
	 else {
		 a=(x&x-1)%3;
		 b=((x|x-1)+1)%3;
		 (*ops) = (*ops) + 8;/*7 operaciones del a y b m�s una del if de abajo*/
		 
		 if (a == 0) {
			 a = 0;
			 (*ops)++;
		 }
			 else {
				 (*ops)++;
				 if (a == 1) {
					 a = 2;
					 (*ops)++;
				 }
				 else {
					 a = 1;
					 (*ops)++;
				 }
				  }
			 (*ops)++;
			 if (b == 0) {
				 b = 0;
				 (*ops)++;
			 }
			 else {
				 (*ops)++;
				 if (b == 1) {
					 b = 2;
					 (*ops)++;
				 }
				 else {
					 b = 1;
					 (*ops)++;
				 }
				  }
		  printf( "mover disco de la estaca %i a la estaca %i\n",a, b );
		  (*ops)++; /* Para la operaci�n x++*/
	 }
 }
}