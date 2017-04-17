#include <stdio.h>
#include "mov.h"
void iterativo(long int n, long int *ops){
 long int x,a,b; 
 printf("\n");
 (*ops)++;
 for (x = 1; x < (1 << n); x++){
	 (*ops)=(*ops)+2;
     if(n%2){
		 printf( "mover disco de la estaca %i a la estaca %i\n",(x&x-1)%3, ((x|x-1)+1)%3 );
	 (*ops) = (*ops) + 7;}
	 else {
		 a=(x&x-1)%3;
		 b=((x|x-1)+1)%3;
		 (*ops) = (*ops) + 8;/*7 operaciones del a y b más una del if de abajo*/
		 
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
		  (*ops)++; /* Para la operación x++*/
	 }
 }
}