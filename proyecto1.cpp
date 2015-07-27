#include<iostream>
#include<conio>
#include<stdio>
#include<stdlib>
#include<string>
#include<time>
#include<fstream>

#define HORARIO 1
#define TIEMPO 2
#define SEMANA 3
#define SALIR 4

int a,b,op;
char materia[20], semestre[20],dia[20],auxDia[20];
bool encontrado=false;

void menuPrincipal(){  //subrutina ó subprograma, sin parámetros
    printf("HORARIO DE CLASES\n");
    printf("Menu principal:\n");
    printf("1. Ingresar un nuevo horario\n");
    printf("2. Ver el horario de hoy\n");
    printf("3. Ver el horario de la semana\n");
    printf("4. Salir\n");
    }

void HorariodeHoy()
    {
        ofstream escritura;
        escritura.open("carpeta.txt",ios::out|ios::app);
        if(!escritura.fail()){
        cout<<"Ingresa la materia: ";
        gets(materia);
        cout<<"Ingresa el Semestre: ";
        gets(semestre);
        cout<<"Ingrese el dia de la semana: ";
        gets(dia);
        cout<<"Ingrese la hora de inicio: ";
        cin>>a;
        cout<<"Ingrese la hora de fin: ";
        cin>>b;

        escritura<<materia<<" "<<semestre<<" "<<dia<<" "<<a<<" "<<b<<endl;
    }else{
        cout<<"Error, el Archivo No se Pudo Abrir"<<endl;
    }
    escritura.close();
}

void tiempo( )
{
       time_t tiempo = time(0);
       struct tm *tlocal = localtime(&tiempo);
       char output[5];
       strftime(output,5,"%w",tlocal);

       ifstream lectura;//Creamos la variable de tipo lectura
       lectura.open("carpeta.txt",ios::out|ios::in);//Abrimos el archivo
       //validando la apertura del archivo
       if(!lectura.fail())
       {
        cout<<"Ingrese el nombre del dia que corresponde al dia de la semana\n";
        printf("%s\n",output);
        cin>>auxDia;
        lectura>>materia;//lectura adelantada
        encontrado=false;
        while(!lectura.eof())
        {
            lectura>>semestre>>dia>>a>>b;//leyendo los campos del registro
            //Comparar cada registro para ver si es encontrado
            if(strcmp(auxDia,dia)==0)
            {
                cout<<"______________________________"<<endl;
                cout<<dia<<'\t';
                cout<<a<<"HOO-"<<b<<"HOO"<<endl;
                cout<<semestre<<endl;
                cout<<materia<<endl;
                cout<<"______________________________"<<endl;
                encontrado=true;
            }
            lectura>>materia;//lectura adelantada
        }
        if(encontrado==false)
        {
            cout<<"No hay registros del dia: "<<auxDia<<endl;
        }
       }
       else
        {
        cout<<"No se pudoAbrir el Archivo, aun no ha sido Creado"<<endl;
        }
    system("PAUSE");
    lectura.close();
}

salir()
{
   cout<<"PROGRAMA FINALIZADO\n";
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
           HorariodeHoy();
           break;
      case TIEMPO:
           tiempo();
           break;

      case SALIR:
           salir();
           break;

	}
   }while (opcion!=4);
getch();
}
