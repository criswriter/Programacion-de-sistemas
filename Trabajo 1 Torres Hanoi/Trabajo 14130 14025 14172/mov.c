#include<stdio.h>
#include "mov.h"
long int movs(int n) {/*Este programa calucla el número de movimientos que son necesarios para resolver el problema de las torres en función*/
	int i;  /*del número de discos que hay. n es el número de discos que hay en el problema*/
	long int movi;/*Número total de movimientos, la solución es 2^n -1*/
	movi = 1;
	for (i = 0; i<n; i++)
		movi = movi * 2;
		movi--;
    return movi;
}
