// É primo?
// problema disponível em https://neps.academy/lesson/243

#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n,primo=1; //inicializo o número a ser analisado e um "verificador", que sera igual a 1 enquanto
                 //nao encontrarmos um número divisível por ele
  scanf("%d",&n);
  for(int i=2;i<=n/2;i++){//comeco o for a partir de 2, pois 1 é divide todos os numeros e 0 não pode dividir nada
                          //irei continuar o loop até n/2, pois a metade de um número é o seu maior divisor possível
    if(n%i==0){
      primo=0;//caso o módulo de n por i (resto da divisao de n por i) for igual a zero, i é um divisor de n
    }         //logo n não é primo

  }
  if(primo&& n>1)printf("S"); //caso a condicional nao tenha sido ativada, primo=1 e n é primo.
                              //veja que para n=1, nosso programa irá considerá-lo como primo, mas sabemos que
                              //isso não é verdade. Para corrigir isso, n deve ser maior que 1 para ser primo.
  else
    printf("N"); //caso contrário, primo=0 e n não é primo
  return 0;
}
