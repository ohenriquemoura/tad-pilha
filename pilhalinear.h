#include "carro.h"
#include <stdbool.h>
#define MAX 5

typedef struct pilha{
  carro dados[MAX];
  int n;

}pilha;
 void newpilha(pilha *p);

 void push(pilha *p, carro c);

 carro pop(pilha *p);

 void mostrar(pilha *p);

 bool apilhaestavazia(pilha *p);
   
 

