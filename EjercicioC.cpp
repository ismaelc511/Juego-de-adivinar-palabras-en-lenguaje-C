#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
# define TAM 10
int m=0;
int main(int argc, char *argv[]){
while(m==0){
	char palabra[100], adiv[100],*deportes[] = {"futbol", "basketball", "beisball", "natacion", "tenis", "atletismo", "jabalina", "bolos", "ajedrez", "voleyball" };
	int x, c, i, n, j, p;
	bool k;
	int repetir;
	
	srand(time(0));
	p= rand() % TAM;
	strcpy (palabra, deportes[p]);
	c=strlen(palabra);
	
	for(i=0; i<c; i++)
	{
		adiv[i]='-';
	}
	
	puts("Hola, este es un juego de adivinar palabras con tematica de deportes");
	puts("\nListo, tienes 5 intentos");
	
	n=5;
	while(n>0){
		printf("\nPalabra Oculta: %s\n", adiv);
		printf("Fallos restantes: %d\n", n);
		printf("Introduzca una letra: ");
		x=getchar();
		getchar();
		k=true;
		for(i=0;i<c;i++)
		{
			if(palabra[i]==x)
			{
				adiv[i]=x;
				k=false;	
			}
		}
			
		if(k)
		{
			n--;
		}
		j=0;
		for(i=0;i<c;i++)
		{
			if(palabra[i]==adiv[i])
			{
				j++;
			}
		}
		if(j==c)
		{
			n=0;
		}
	}
	if(j==c)
	{
		puts("\nFelicitaciones!");
	}
	else
	{
		puts("\noh no!!, Intentelo de nuevo");
	}
		
	printf("si quieres volver a jugar presiona el numero 1 de lo contrario presiona otra tecla \n");
	scanf("%d", &repetir);
	if(repetir==1){
		printf("H");
		n=5;
		system("cls");
		srand(time(0));
		p= rand() % TAM;
		strcpy (palabra, deportes[p]);
		c=strlen(palabra);
	}
	else if(repetir != 1){
		return 0;
	}
}
	return 0;
}
		
