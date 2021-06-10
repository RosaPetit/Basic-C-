#include <stdio.h>
//Incluye la funcion printf (para organizar)
int main(){
	printf("Hola \n");
	//Definicon de variables con 'int' (solamente se define la vartiable no se le asigna nigun valor)
 	int a;
	int b;
	//Imprimir la variables establecidas 'a' y 'b'
	printf("%i \n", a);
	printf("%i \n", b);
	
	//Se le asigna un valor a las variables definidas 'a' y 'b' 
	a=1;
	b=2;	
	//Para observar el valor asignado en el paso anterior se imprime nuevamente con la funcion 'printf'
	printf("%i \n", a);
	printf("%i \n", b);
	char miNombre[]="Rosa";
	printf("Mi Nombre es: %s \n\n", miNombre);
	
	int c=a+b;
	printf("%i \n",c);
	
	// Se le coloca un salto de pagina '\n\n'
	printf("\n\n");
	return 0; 
}
