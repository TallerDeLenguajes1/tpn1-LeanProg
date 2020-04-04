#include <iostream>
using namespace std;

int cuadrado(int n); //punto a
void cuadrado2(int *p); //punto b
void detalles(int *p);// puntoc 
void invertir(int *n,int *m);
void ordenMenor(int *n, int *m);
int main(){
        int numero,*p;
        p=&numero;
        int numeroa,numerob,*PA,*PB;
        PA=&numeroa;
        PB=&numerob;
        printf("ingrese un numero \n");
        scanf("%d",&numero);
        printf("el Cuadrado del numero es: %d ", cuadrado(numero));
        cuadrado2(p);
        printf("\n el Cuadrado del numero es: %d ", *p);
        detalles(p);

        printf("ingrese un numeroA \n");
        scanf("%d",&numeroa);
        printf("ingrese un numeroB \n");
         scanf("%d",&numerob);
         invertir(PA,PB);
        printf("\n el valor de numero A: %d ", numeroa);
        printf("\n el valor de numero B: %d ", numerob);
        ordenMenor(PA,PB);
        printf("\n Valor menor: %d ", numeroa);
        printf("\n Valor mayor: %d ", numerob);
 
}

int cuadrado(int nume){
    nume=nume*nume;
    return nume;
}
void cuadrado2(int *p){
    *p*=*p;

}
void detalles(int *p){
    printf("\nDireccion de memoria alamcenada por el puntero %p \n",p);
    printf("Contenido de la variable %i\n",*p);

}

void invertir(int *n, int *m){
    int aux;
    aux=*n;
    *n=*m;
   *m=aux;
  
     
}
void ordenMenor(int *n, int *m){
    int aux;
    
            if (*n>*m)
            {
                    aux=*n;
                    *n=*m;
                    *m=aux; 
            }
        
}