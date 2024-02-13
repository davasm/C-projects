#include <stdio.h>

typedef struct{
    double x;
    double y;
} entrada;

void multiplica(entrada N){
    
        printf("Insira o primeiro numero: \n");
        scanf("%lf", &N.x);
        
        printf("Insira o segundo numero: \n");
        scanf("%lf", &N.y);
        printf("Multiplicacao de %.3lf e %.3lf = %.3lf\n", N.x, N.y, N.x * N.y );
}

void divide(entrada N){
        printf("Insira o primeiro numero: \n");
        scanf("%lf", &N.x);
        
        printf("Insira o segundo numero: \n");
        scanf("%lf", &N.y);
        printf("Divisao entre %.3lf e %.3lf = %.3lf\n", N.x, N.y, N.x / N.y );
}

void adiciona(entrada N){
        printf("Insira o primeiro numero: \n");
        scanf("%lf", &N.x);
        
        printf("Insira o segundo numero: \n");
        scanf("%lf", &N.y);
        printf("Adicao de %.3lf e %.3lf = %.3lf\n", N.x, N.y, N.x + N.y );
}

void subtrai(entrada N){
        printf("Insira o primeiro numero: \n");
        scanf("%lf", &N.x);
        
        printf("Insira o segundo numero: \n");
        scanf("%lf", &N.y);
        printf("Subtracao de %.3lf e %.3lf = %.3lf\n", N.x, N.y, N.x - N.y );
}

int main()
{
    entrada N;
    char op;

        while(1){
        printf("========================= Calculadora =========================\n");
        
        printf("Insira a operacao\n* Multiplicacao\n/ Divisao\n+ Adicao\n- Subtracao \n");
        scanf("%c", &op);
        switch(op){
            case '*' : multiplica(N);
            case '/' : divide(N);
            case '+' : adiciona(N);
            case '-' : subtrai(N);
            }
        }  
        
    
    return 0;
}

