#include <stdio.h>
int opc;
int valor;
int base, altura, area;
float atriangulo;
void main(){
    printf("Programa para practicar funciones\n");    
    do{
        printf("1.- Ejecutar funcion sin parametros.\n");
        printf("2.- Ejecutar funcion con parametros sin retorno.\n");
        printf("3.- Ejecutar funcion con parametros con retorno.\n");
        printf("4.- Terminar el programa\n");
        printf("Elija una opcion: ");
        scanf("%d",&opc);
        switch (opc)
        {
        case 1:
            printf("Funcion sin parametros que te saluda despues de precionar una tecla.");
            getch();
            saludo();
            break;
        
        case 2:
            printf("Funcion con parametros que te calcula el area de un cuadrado.\n");
            printf("Proporciona el lado del cuadrado: ");
            scanf("%d",&valor);
            cuadrado(valor);
            break;
        case 3:
            printf("Funcion con parametros que te calcula el area de un Triangulo.\n");
            printf("Proporciona la base: ");
            scanf("%d",&base);
            printf("Proporciona la altura: ");
            scanf("%d",&altura);
            area = triangulo(base, altura);
            atriangulo =  area / 2;
            printf("El resultado del area de tu triangulo es: %f\n",atriangulo);
            getch();
            break;
        case 4:
            printf("Terminar el programa.");
            break;
        default:
            printf("Esa opcion no existe\n");
            break;
        }
    }while(opc!=4);
}

//Areá de Funciones
//Sin parametros
saludo(){
    printf("\nHola grupo, buenos dias. Preciona una tecla para terminar\n");
    getch();
}

//Con parametros sin return
cuadrado(int lado){
    lado = lado * lado;
    printf("El area de tu cuadrado es: %d\n",lado);
    getch();
}

//Con parametros con return
int triangulo(int base, int altura){
    int resultado;
    resultado = base * altura;
    return resultado;
}