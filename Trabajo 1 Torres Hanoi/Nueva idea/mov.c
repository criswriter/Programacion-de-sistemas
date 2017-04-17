#include<stdio.h>
#include "mov.h"
long int movs(int n) {
	int i;
	long int movi;
	movi = 1;
	for (i = 0; i<n; i++)
		movi = movi * 2;
		movi--;
    return movi;
}
