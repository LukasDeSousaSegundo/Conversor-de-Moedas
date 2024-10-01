#include <stdio.h>

int escolheropcao ()
{
    int opcao;
    
    printf("Digite 1: Real para dólar\n");
    printf("Digite 2: Real para euro\n");
    printf("Digite 3: Dólar para real\n");
    printf("Digite 4: Euro para real\n");
    printf("Digite 0 para encerrar\n");
    
    printf("Digite sua Opção:\n");
    scanf("%d", &opcao);
    
    return opcao;
}

int main()
{
    float valorreal, taxadecambio, valoreuro, valordolar;
    int opcao;
    
    do
    {
    
        opcao = escolheropcao();
        
        switch(opcao)
        {
            case 1:
            printf("Digite o valor em Real\n");
            scanf("%f", &valorreal);
            
            taxadecambio = 5.43;
            valordolar = valorreal / taxadecambio;
            
            printf("Resultado da conversão de real para dólar %f\n", valordolar);
            break;
            
             case 2:
            printf("Digite o valor em Real\n");
            scanf("%f", &valorreal);
            
            taxadecambio = 6.06;
            valoreuro = valorreal / taxadecambio;
            
            printf("Resultado da conversão de real para euro %f\n", valoreuro);
            break;
            
             case 3:
            printf("Digite o valor em Dólar\n");
            scanf("%f", &valordolar);
            
            taxadecambio = 5.43;
            valorreal = valordolar * taxadecambio;
            
            printf("Resultado da conversão de dólar para real %f\n", valorreal);
            break;
            
             case 4:
            printf("Digite o valor em euro\n");
            scanf("%f", &valoreuro);
            
            taxadecambio = 6.06;
            valorreal = valoreuro * taxadecambio;
            
            printf("Resultado da conversão de euro para real %f\n", valorreal);
            break;
            
            case 0:
            printf("Encerrando...\n");
            break;
            
            default:
            printf("Opção inválida...\n");
            break;
            
        }
        
    }while(opcao != 0);
    

    return 0;
}