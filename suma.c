#include <stdio.h> 
#define PI 3.14159265358
int main()

{

//definicion de vectores:
//int s[5]; (vector con un numero de elementos)
//int s[]= 1,2,3,4,5; (vector definido)

float n1,n2,r;


printf( "Introduce el primer numero a sumar:  \n");
	scanf("%f",&n1); 

printf("Introduce el segundo numero a sumar: \n");
	scanf("%f", &n2);
 
r= n1+n2;

printf(" Resultado: %f", r);
printf(" Pi es: %f", PI);


printf("\n\n");

return 0; 

}
