#include <stdio.h>
//Definicion de estructura
struct ejemplo
{
    int edad;
    char nombre[100];
};

struct alumno
{
    char matricula[20];
    char nombre[100];
    char carrera[50];
}dataalumno[3];

struct dueno
{
    char nombre[100];
    char dir[200];
};

struct auto1
{
    char marca[100];
    int modelo;
    struct dueno duenoauto;
}autos[3];

void main(){
    //estructurasimple();
    //estructuraarreglo();
    estruturaanidada();
}

estructurasimple(){
    struct ejemplo dato;
    printf("Programa que utiliza estructuras de datos.\n");
    printf("Este Programa solicita dos datos nombre y edad.\n");

    printf("Proporcione el nombre: ");
    scanf("%s",&dato.nombre);
    printf("Proporcione la edad: ");
    scanf("%d",&dato.edad);

    printf("El registro se realizo con los datos %s, %d",dato.nombre, dato.edad);
    getch();
}

estructuraarreglo(){
    int x;
    printf("Programa que utiliza estructuras de datos anidadas con arreglos.\n");
    printf("Este Programa solicita datos de un propietario y su vehiculo.\n");

    for(x=0; x<3; x++){
        printf("Proporcione los datos del Alumno No.%d\n",x+1);
        printf("Proporcione la Matricula: ");
        scanf("%s",&dataalumno[x].matricula);
        printf("Proporcione el Nombre: ");
        scanf("%s",&dataalumno[x].nombre);
        printf("Proporcione la Carrera: ");
        scanf("%s",&dataalumno[x].carrera);
        printf("\n");
    }

    for(x=0; x<3; x++){
        printf("\nDatos del alumno No.%d\n",x+1);
        printf("Matricula: %s\n",dataalumno[x].matricula);
        printf("Nombre: %s\n",dataalumno[x].nombre);
        printf("Carrera: %s\n",dataalumno[x].carrera);
    }
    getch();
}

estruturaanidada(){
    int x;
    printf("Programa que utiliza estructuras de datos con arreglos.\n");
    printf("Este Programa solicita datos del alumno.\n");

    for(x=0; x<3; x++){
        printf("Proporcione los datos del Vehiculo No.%d\n",x+1);
        printf("Proporcione la Marca: ");
        scanf("%s",&autos[x].marca);
        printf("Proporcione el Modelo: ");
        scanf("%d",&autos[x].modelo);
        printf("Proporcione los datos del dueño.\n");
        printf("Nombre: ");
        scanf("%s",&autos[x].duenoauto.nombre);
        fflush(stdin);
        printf("Direccion: ");
        scanf("%s",&autos[x].duenoauto.dir);
        fflush(stdin);
        printf("\n");
    }

    for(x=0; x<3; x++){
        printf("\nDatos del Vehiculo y Propietario No.%d\n",x+1);
        printf("Auto Marca: %s\n",autos[x].marca);
        printf("Modelo: %d\n",autos[x].modelo);
        printf("Datos del propietario: \n");
        printf("Nombre: %s\n",autos[x].duenoauto.nombre);
        printf("Direccion: %s\n",autos[x].duenoauto.dir);
    }
    getch();
}