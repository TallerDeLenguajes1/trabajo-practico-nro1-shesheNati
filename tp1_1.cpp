#include <stdio.h>
#include <stdlib.h>

	void main(){
		int Var1;
		int *pVar1;
		/* i) Declare un puntero en el precedimiento principal que apunte a una a variable de algun tipo 
		 y que devuelva por pantalla: */ 
		Var1 = 542;
		pVar1 = &Var1;  

		/* (1)El contenido del puntero */
		printf("Contenido del puntero es:%d\n",*pVar1);
		/* (2) Direccion de memoria almacenada por el puntero*/
		printf("Direccion de memoria almacenada por el puntero es:%p\n", pVar1);
		/* (3)La direccion de memoria de la variable*/
		printf("Direccion de memoria de la variable:%p\n", &Var1);
		/* (4)La direccion de memoria del puntero*/
		printf("Direccion de memoria del puntero:%p\n",&pVar1);
		/* (5)El tamaño de memoria utilizado por esa variable usando la funcion sizeof()*/
		printf("Tamanio de memoria utilizado por esa variable:%d\n", sizeof(Var1));

	}

/*Rpta1: El pto 2 y el pto3 es el mismo resultado por un puntero almacena la direccion de memoria
de otra variable en esta caso el pto3*/
/*Rpta: Obtengo la direccion de memoria del "Puntero", no es la misma que la anteriores porque
es el puntero es otra variable*/