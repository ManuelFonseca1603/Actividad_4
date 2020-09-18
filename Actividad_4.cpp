#include"stdio.h"

void capturar(){
	int i,numeros[5];
	float s;
	for(i=0;i<5;i++)
	{
	scanf("%i",&numeros[i]);
	s+=numeros[i];
	}
	printf("Los numeros son: \n");
	for(i=0;i<5;i++)
	printf(" %i \n",numeros[i]);
	printf("La suma es: %.2f\nEl promedio es: %.2f\n",s,s/5);
}

main()
{
	int op;
	
	printf("Elige la opccion que quieres:\n"
			"1.-Capturar numeros e imprimir suma y promedio\n"
			"2.-Capturar un arreglo e imprimirlo n veces\n"
			"3.-Crear personaje\n"
			"4.-salir\n");
	scanf("%i",&op);
	
	switch(op)
	{
		case 1:
			printf("Escribe los numeros: \n");
			capturar();
		break;	
	}
	
	return 0;		
}
