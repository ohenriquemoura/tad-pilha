#include <stdio.h>
#include "pilhalinear.h"
int main(void) {
  
  pilha estacionamento;

  int operacao;
  int placa;

  printf("======BEM VINDO AO ESTACIONAMENTO=======\n");
  printf("DIGITE PRIMEIRO ALGUMA DAS RESPECTIVAS OPERACOES:\n");
  printf("[1]INSERIR VEICULO\n");
  printf("[2]REMOVER VEICULO\n");
  printf("EM SEGUIDA DIGITE A PLACA DO CARRO\n");



  do{

    scanf("%i %i", &operacao,&placa);

    switch(operacao){
      case 1:
      {
        carro c;
        c.placa=placa;
        c.manobras=0;
        push(&estacionamento,  c);
        printf("Carro inserido no estacionamento\n");
        mostrar(&estacionamento);
      }
      break;
      case 2:{
        pilha paux;
        newpilha(&paux);

        while(!apilhaestavazia(&estacionamento)){
          carro c=pop(&estacionamento);
          if(c.placa == placa){
            printf("\nCarro encontrado e removido!\n");
            break;
          }
          push(&paux,c);
        }
        while(!apilhaestavazia(&paux)){
          carro c= pop(&paux);
          c.manobras++;
          push(&estacionamento, c);

        }
        mostrar(&estacionamento);

      }
      break;
    }
  }while(operacao!=0);
  return 0;
}