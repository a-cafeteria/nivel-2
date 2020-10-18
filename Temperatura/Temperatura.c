#include <stdio.h>
#include <string.h>

int main(){
    char primeira_medida[20], segunda_medida[20]; /*l� qual a medida do primeiro numero(que vai ser transformado) e a do segundo
    o reseultado*/
    double primeiro_valor, segundo_valor;   //l� os valores dos graus

    printf("Digite a medida que est� a temperatura: "); // informa o valor inicial
    scanf("%s", &primeira_medida);
    printf("\n");

    printf("Digite a medida que ser� mostrada: "); // informa a medida para qual o valor ser� trasnformado
    scanf("%s", &segunda_medida);
    printf("\n");

    printf("Digite o valor da temperatura: "); //informa o valor a ser transformado
    scanf("%f", &primeiro_valor);
    printf("\n");

    // a partir de agora, ir� calcular os n�meros baseados no dados informados

    if (strcmp(primeira_medida, "fahrenheit") == 0){
        if(strcmp(segunda_medida, "celsius") == 0){
            segundo_valor = (primeiro_valor - 32) * 5/9;
            printf("O valor �: %.1f graus %s", segundo_valor, segunda_medida);
        }
    }

    if(strcmp(primeira_medida, "kelvin") == 0){
        if(strcmp(segunda_medida, "celsius") == 0){
            segundo_valor = primeiro_valor - 273.15;
            printf("O valor �: %.1f graus %s", segundo_valor, segunda_medida);
        }
    }

    if(strcmp(primeira_medida, "fahrenheit") == 0){
        if(strcmp(segunda_medida, "kelvin") == 0){
            segundo_valor = (primeiro_valor - 32) * 5 / 9 + 273.15;
            printf("O valor �: %.1f %s", segundo_valor, segunda_medida);
        }
    }

    if(strcmp(primeira_medida, "kelvin") == 0){
        if(strcmp(segunda_medida, "fahrenheit") == 0){
            segundo_valor =  (primeiro_valor - 273.15) * 9 / 5 + 32;
            printf("O valor �: %.1f graus %s", segundo_valor, segunda_medida);
        }
    }

    if(strcmp(primeira_medida, "celsius") == 0){
        if(strcmp(segunda_medida, "fahrenheit") == 0){
            segundo_valor =  (primeiro_valor * 9 / 5) + 32;
            printf("O valor �: %.1f graus %s", segundo_valor, segunda_medida);
        }
    }

    if(strcmp(primeira_medida, "celsius") == 0){
        if(strcmp(segunda_medida, "kelvin") == 0){
            segundo_valor =  primeiro_valor + 273.15;
            printf("O valor �: %.1f %s", segundo_valor, segunda_medida);
        }
    }

    else{
        printf("Os dados digitados est�o errados");
    }

    return 0;
}
