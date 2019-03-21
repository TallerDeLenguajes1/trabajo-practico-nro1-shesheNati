#include <stdio.h>
#include <stdlib.h>

	void main(){
		int *pPeso;
		int Peso;

		Peso = 570;
		pPeso = &Peso;	

		printf("la direccion es:%p \n", &Peso);
		printf("la direccion es:%p\n", pPeso);
		printf("la direccion es:%d\n", sizeof(Peso));
		printf("la direccion del puntero es:%p\n", &pPeso);


		printf("el contenido por direccion es:%d\n", Peso);
		printf("el contenido por indireccion es:%d", *pPeso);
	}