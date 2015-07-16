 #include<iostream>
#include<conio>
#include<stdio>
#include<stdlib>
#include<string>
#include<time>

#define HORARIO 1
#define TIEMPO 2

void menuPrincipal(){  //subrutina ó subprograma, sin parámetros
    printf("HORARIO DE CLASES\n");
    printf("Menu principal:\n");
    printf("1. Ingresar un nuevo horario\n");
    printf("2. Ver el horario de hoy\n");
    printf("3. Ver el horario de la semana\n");
    printf("4. Salir\n");
    }

void HorariodeHoy(int a, int b, char mat, char sem, char dia)
    {  //subrutina conocida como procedimiento, por ser void

    printf("Nombre de la materia:\n");
    fflush(stdin);
    scanf("%s",&mat);
    printf("Nombre del semestre:\n");
    fflush(stdin);
    scanf("%s",&sem);
    printf("Dia de la semana:\n");
    fflush(stdin);
    scanf("%s",&dia);
    printf("Horario de inicio:\n");
    fflush(stdin);
    scanf("%d",&a);
    printf("Horario de fin:\n");
    fflush(stdin);
    scanf("%d",b);
		}
    void tiempo( )
    {
      struct tm *tiempo;
	int dia;
	int mes;
	int anio;

	time_t fecha_sistema;
	time(&fecha_sistema);
	tiempo=localtime(&fecha_sistema);

	anio=tiempo->tm_year + 1900;
	mes=tiempo->tm_mon + 1;
	dia=tiempo->tm_mday;
   asctime(&fecha_sistema);
      cout<<fecha_sistema<<'end1';
   cout<<tm_wday<<'end1';

   }

main()
{
   int opcion,a,b;
   char mat,sem,dia;
   do{
   menuPrincipal();
   cout<<"Ingrese una opcion: \n";
   cin>>opcion;
   switch(opcion)
   {
   	case HORARIO:
           HorariodeHoy(a,b,mat,sem,dia);
           break;
      case 2:
           tiempo();
           break;

	}
   }while (opcion!=4);
getch();
}

