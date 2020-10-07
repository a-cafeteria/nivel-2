// Código (OBI 2015)
// problema disponivel em https://neps.academy/lesson/139

#include <stdio.h>

int main(){
    
    int tamanho,i;
    
    int cens=0;
    
    scanf("%d",&tamanho);
    
    int numeros[tamanho];
    
    for(int i=0;i<length;i++)scanf("%d",&numeros[i]);//salvo os numeros
    
    for(i=2;i<length;i++){//comeco da posicao 3 pois quero verificar duas posicoes antes
        
        if(numeros[i-2]==1&&numeros[i-1]==0&&numeros[i]==0){//condicional para ver se há um cem, ou seja, um numero 1 duas posicoes atras, e um zero na posicao atual e na anterior
            
            cens++;//caso positivo, incremento a quantidade de cens
            
        }
        

    }
   
    printf("%d",&cens);
    
    return 0;

}
