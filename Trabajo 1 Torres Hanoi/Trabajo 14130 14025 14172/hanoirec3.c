#include<stdio.h>
#include "mov.h"
#include<time.h>/*Esta es la resolución de la función recursiva de las torres de Hanoi*/
void hanoirec(int n,int inic,int temp,int fin,long int *llam, long int *ops){
	(*llam)++;/*El contador para saber cuantas veces se realiza la llamada a la función recursiva*/
	 (*ops)++;
	if (n == 1) {
      printf("mover disco de la estaca %d a la estaca %d\n",inic,fin);
   }

    (*ops)++;
      if(n>1){
      hanoirec(n-1,inic,fin,temp, llam, ops);
	  (*ops)++;
         printf("mover disco de la estaca %d a la estaca %d\n",inic,fin);
      hanoirec(n-1,temp,inic,fin, llam, ops);
	  (*ops)++;
   }
}
