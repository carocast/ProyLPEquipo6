#include<iostream>
#include<conio>
#include<stdio>

main()
{
char materia[20],semestre[20], dia[20];
 int h_i, h_f,opcion;


cout<<"HORARIO DE PEDRO:";
cout<<"\nIngrese la opcion que desea realizar:";
cout<<"\n1. Ingresar un nuevo horario";
cout<<"\n2. Ver el horario de hoy";
cout<<"\n3. Ver el horario de la semana";
cout<<"\n4. Salir\n";
cin>>opcion;
int m=1;

switch(opcion)
{
case 1:
{
   do
   {
	cout<<"Introduzca el numero de hora clase de inicio: ";
   cin>>h_i;
   cout<<"Introduzca el numero de hora clase de fin: ";
   cin>>h_f;
   cout<<"Introduzca la materia: ";
   fflush(stdin);
   gets(materia);
   cout<<"Introduzca el semestre: ";
   fflush(stdin);
   gets(semestre);
   cout<<"Introduzca el dia de clase: ";
   fflush(stdin);
   gets(dia);

   cout<<"\nQuiere seguir aumentando su horario de clases s/n \n";
   m=getch();

 } while( m== 's' || m == 'S');


 }break;


 }
getch();

 }

