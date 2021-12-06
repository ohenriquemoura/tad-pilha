#include "pilhalinear.h"
#include <stdio.h>

 void newpilha(pilha *p){
   p->n=0;
 }


 void push(pilha *p, carro c){
   if(p->n == MAX){
     printf("O estacionamento está cheio");
   }else{
     p->dados[p->n]=c;
     p->n++;
     
   }
 }

 carro pop(pilha *p){
   if(p->n==0){
     printf("O estacionamento esta vazio\n");
     carro c ={-1, -1};
     return c;
   }else{
     p->n--;
     
     return p->dados[p->n];

   }
 }

 void mostrar(pilha *p){
   for(int i=0; i<p->n;i++){
     printcarro(p->dados[i]);
   }
   printf("\n");
 }
 bool apilhaestavazia(pilha *p){
   return p->n==0;
 }
