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

    void Dias()
    {
    printf("Escoja el Dia de la semana que desea ingresar\n");
    printf("1. Lunes\n");
    printf("2. Martes\n");
    printf("3. Miercolesn");
    printf("4. Jueves\n");
    printf("5. Viernes\n");
		}

void HorariodeHoy(int a, int b, char mat, char sem, char dia)
    {  //subrutina conocida como procedimiento, por ser void

    printf("Nombre de la materia:\n");
    fflush(stdin);
    scanf("%s",&mat);
    printf("Nombre del semestre:\n");
    fflush(stdin);
    scanf("%s",&sem);
    printf("Horario de inicio:\n");
    fflush(stdin);
    scanf("%d",&a);
    printf("Horario de fin:\n");
    fflush(stdin);
    scanf("%d",b);
		}
    void tiempo( )
    {
      time_t t1;
      struct tm *t2;
		t1 = time(NULL);
		t2 = gmtime(&t1);
		cout<<asctime(t2)<<'\n';
		cout<<t2->tm_wday<<'endl';

   }

main()
{
   int opcion,a,b,op;
   char mat,sem,dia;
   do{
   menuPrincipal();
   cout<<"Ingrese una opcion: \n";
   cin>>opcion;
   switch(opcion)
   {
   	case HORARIO:

           Dias();
           do
            {
           cout<<"Ingrese una opcion: \n";
           cin>>op;
           if(op<0 | op>5)
           {
           cout<<"Su opcion no pertenece a los dias de clases";
           }
           }while(op<0 | op>5);
				HorariodeHoy(a,b,mat,sem,dia);

        break;
      case 2:
           tiempo();
           break;

	}
   }while (opcion!=4);
getch();
}
