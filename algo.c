#include <stdio.h>

int main (){

int a[]={3,6,55,66,7,8,9,2,4,34,1};

int min = a[0];

for(int i=0; a[i]!=0; i++){
	if (a[i] < min) min =a[i];
}

printf ("die kleinste Zahl ist die Zahl %i  \n" , min );
return 0;
}

