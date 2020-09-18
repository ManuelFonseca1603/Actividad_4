#ifndef personaje_h
#define personaje_h
#include"stdio.h"

int i;
unsigned int cont = 0;

struct personaje 
{
	char nombre[50];
	char tipo[8];
	int fuerza;
	float salud;		
}personajes[5];



void capturar_personajes(){
	if(cont < 5)
	{
	printf("\nNombre:  ");
	scanf("%s",personajes[cont].nombre);
	printf("\nTipo: ");
	scanf("%s",personajes[cont].tipo);
	printf("\nFuerza: ");
	scanf("%i",&personajes[cont].fuerza);
	printf("\nSalud: ");
	scanf("%f",&personajes[cont].salud);
	cont++;
	}
	else
	printf("Ya creaste todos los personajes");
}
	
void mostrar_personajes(){
	for(size_t i=0;i<cont;i++)
	{
	printf("\nNombre:  %s",personajes[i].nombre);
	printf("\nTipo:  %s",personajes[i].tipo);
	printf("\nFuerza:  %i",personajes[i].fuerza);
	printf("\nSalud:  %.2f",personajes[i].salud);
	
	}
}	

#endif
