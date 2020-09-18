#include<stdio.h>
#include<stdlib.h>
#include"personaje.h"

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

void mostrar(int n,char arreglo[]){
	int i;
	for(i=0;i<n;i++)
	printf(" %s\n",arreglo);
}

main()
{
	int op,n;
	char r,arreglo[50];

	
	do
	{
	system("cls");	
	printf("Elige la opccion que quieres:\n"
			"1.-Capturar numeros e imprimir suma y promedio\n"
			"2.-Capturar un arreglo e imprimirlo n veces\n"
			"3.-Crear personaje\n"
			"4.-Mostrar personaje\n"
			"5.-salir\n");
	scanf("%i",&op);
	
	switch(op)
	{
		case 1:
			printf("Escribe los numeros: \n");
			capturar();
		break;
		case 2: 
			printf("Escribe la frace que quieres: \n");
			fflush(stdin);gets(arreglo);
			printf("Escribe la cantidad de veces que lo quieres repetir: \n");
			scanf("%i",&n);
			mostrar(n,arreglo);
		break;
		
		case 3: 
			capturar_personajes();
		break;
		
		case 4:
			mostrar_personajes();
		break;
			
		case 5: 
		break;
		
		default: printf("\nLa funcion no existe");  	
	}
	
	printf("\n\nQuieres repetir el programa: \ns=si\n n=no\n");
	scanf("%s",&r);
	}
	while(r=='S' || r=='s');
	
	
	return 0;		
}
