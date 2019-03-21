#include <stdio.h>
#include <stdlib.h>

/* i)Haga una funcion que devuelva el cuadrado de un numero*/
int cuadradoDeN(int n);
void cuadrado(int *n);
void invertir(int *a, int *b);
void EnOrdenCreciente(int *var1,int *var2);
void LeerParesDeValores();


	void main(){
		int test = cuadradoDeN(5);
		printf("el cuadrado de un numero es:%d\n",test);

		int test2 = 4;
		cuadrado(&test2);
		int c = 10;
		int d = 25;

		printf(" a = %d\n", c);
		printf(" b = %d\n", d);

		printf("Utilizo funcion invertir\n");
		invertir(&c,&d);
		
		printf(" a = %d\n", c);
		printf(" b = %d\n", d);

		int var3 = 500;
		int var4 = 13;


		printf(" var1 = %d\n", var3);
		printf(" var2 = %d\n", var4);

		printf("Utilizo funcion de orden creciente\n");

		EnOrdenCreciente( &var3, &var4);

		printf(" var1 = %d\n", var3);
		printf(" var2 = %d\n", var4);

		LeerParesDeValores();
	}

	int cuadradoDeN(int n) {

		return (n*n);
	}
/* ii)Haga la funcion anterior, pero devolviendo un tipo void*/
/*iii)Al recibir una variable muestre por pantalla la dirección y el contenido de la variable*/

	void cuadrado(int *n) {
		int aux = *n;
		*n = aux*aux; 
		printf("la direccion de la variable:%p\n",n);
		printf("el contenido de la variable:%d\n",*n);
	}
/* iv) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
void Invertir(a,b) //deberá devolver en el valor de a en la variable b y en b el valor de a*/

	void invertir(int *a,int *b){
	
		int temp = *a;
		*a = *b;
		*b = temp;

	}

/* v) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada,
en el primer parámetro el menor y en el segundo el mayor.*/

	void EnOrdenCreciente(int *var1,int *var2){
		
		if(*var1 > *var2){
			invertir(var1,var2);
		}
	}

/*vi) Utilice la función anterior para leer pares de valores e imprimirlos por pantalla
de forma ordenada.*/

	void LeerParesDeValores(){
		int num1;
		int num2;

		printf("Ingrese un numero entero\n");
		scanf("%d", &num1);
		//getchar();
		printf("Ingrese otro numero entero\n");
		scanf("%d", &num2);
		EnOrdenCreciente(&num1,&num2);
		printf("numero 1 = %d\n", num1 );
		printf("numero 2 = %d\n", num2 );
	}