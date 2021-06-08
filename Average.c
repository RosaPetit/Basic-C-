#include <stdio.h> 
int main()

{

puts("Promedio de cinco valores");

printf("\n\n");

float v1,v2,v3,v4,v5,p;

printf("Introduce el valor uno:  \n");
	scanf("%f", &v1);

printf("Introduce el valor dos:  \n");
	scanf("%f", &v2);

printf("Introduce el valor tres:  \n");
	scanf("%f", &v3);

printf("Introduce el valor cuatro:  \n");
	scanf("%f", &v4);

printf("Introduce el valor cinco:  \n");
	scanf("%f", &v5);

p=(v1+v2+v3+v4+v5)/5;

printf("El promedio es: %f \n", p); 

printf("\n\n");

return 0; 

}
