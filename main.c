#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 50

typedef struct Tienda{
  char prod[TAM];
  float precio;
  int SKU;
}tienda;

void escribe(tienda *);
void lee(tienda *);

void main(void){
  /* code */
  tienda p01, p02, *p03;
  lee(&p01);
  //lee(&p02);
  //escribe(&p01);
  //escribe(&p02);
  p03 = (tienda*)malloc(sizeof(tienda));
  //lee(p03);
  //escribe(p03);
}

void escribe(tienda *ap){

}
void lee(tienda *ap){
  char c;
  printf("Introduce SKU: ");
  scanf("%d", &(*ap).SKU);
  printf("Introduce nombre de producto:");
  gets(ap->prod);
}