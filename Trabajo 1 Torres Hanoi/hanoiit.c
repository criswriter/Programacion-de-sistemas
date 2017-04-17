#include <stdio.h>
#include "mov.h"
void iterativo(long int n){
 long int x,a,b; 
 printf("\n");
 
 for (x=1; x < (1 << n); x++)
     
     if(n%2)
		 printf( "mover disco de la estaca %i a la estaca %i\n",(x&x-1)%3, ((x|x-1)+1)%3 );
	 else {
		 a=(x&x-1)%3;
		 b=((x|x-1)+1)%3;
		 
		 
		 if(a==0) a=0;
			 else {
				 if(a==1) a=2;
				 else a=1;
				  }
		 if(b==0) b=0;
			 else {
				 if(b==1) b=2;
				 else b=1;
				  }
		  printf( "mover disco de la estaca %i a la estaca %i\n",a, b );
	 }
}