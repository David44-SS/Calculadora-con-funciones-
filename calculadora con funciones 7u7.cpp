#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void imprimir_menu();
void leer_opcion(int & opt);
int suma (int x, int y);
int resta (int x, int y);
int multiplicacion (int x, int y);
int division (int x, int y);
int leer_valor();

void leer_opcion(int & opt){
printf("Introduce una opcion:\n");
scanf("%d", &opt);
}

int suma(int x,int y){
return x+y;
}

int resta (int x,int y){
return x-y;
}

int multiplicaion (int x,int y){
return x*y;
}

int leer_valor(){
int temp;
printf("Introduce un valor\n");
scanf("%d",&temp);
return temp;
}

int division (int x,int & y){

while(y==0){

  y = leer_valor();
}
return x/y;
}

int main(){
int a,b,c,opt;
do{
imprimir_menu();
leer_opcion(opt);
a=leer_valor();
b=leer_valor();

switch(opt){

case 1:
    c = suma(a,b);
    break;
case 2:
    c = resta(a,b);
    break;
case 3:
    c = multiplicacion(a,b);
    break;
case 4:
c = division(a,b);
    break;
default:
    printf("opcion invalida\n");
}
printf("El resultado es: %d\n",c);
}
}
void imprimir_menu(){
printf("1.-Suma\n");
printf("2.-Resta\n");
printf("3.-Multiplicacion\n");
printf("4.-Division\n");
}


