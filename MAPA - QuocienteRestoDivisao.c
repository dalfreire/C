//Daniel Alves Freire RA 211516225
// Atividade MAPA - Algoritmo e Lógica de Programação II

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h> 
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
int main() 
{
	setlocale(LC_ALL, "Portuguese"); 
    
    // Declarando as variáveis do tipo float D (Dividendo), d (divisor), r (resto), q (quociente)
    // z (parte inteira), x (resultado da divisão D/d), y (parte fracionária)
    double  q, x, y, z;
    int D, d, r;
    char op;
    
    do{
    	printf("***QUOCIENTE E RESTO DE DIVISÃO***\n\n");
    	printf("Este programa retorna a você o quociente e o resto de uma divisão\n\n");
    	printf("Informe o valor do Dividendo:\n");
    	scanf("%d", &D);
    	fflush(stdin);
    
    	printf("Informe o valor do Divisor:\n");
    	scanf("%d", &d);
    	fflush(stdin);
        
        // A variável x recebe o resultado da divisão a partir dos valores informados pelo usuário
        x = D / d;
        
        // Aqui eu uso a função modf para separar a parte inteira da parte fracionária e armazenar 
        // a parte inteira (quociente) na variável q (um ponteiro). 
        // As variáveis envolvidas devem ser do tipo double.
        
        z = modf(x, &q);
        
        // Aqui a variável r recebe o valor do resto da divisão
        r = (D % d);  
        
            // Aqui eu uso uma condição para verficar se os valores estão devidamentos guardados 
            // em memória. Caso os cálculos estejam corretos, será impresso na tela o valor do 
            // quociente e do resto. Caso não será exibido um alerta.
            if(D == (d*q) + r)
            {
                printf("O quociente da divisão é %.0lf\n", q);
                printf("O resto da divisão é %d\n\n", r);
             }
            else                                                                                                                                                             
            {
                printf("Algo de errado aconteceu! Verifique o código.../n");   
            }	
            
    printf("Deseja executar novamente? Se sim, digite S e pressione ENTER.\n\n");
	scanf("%c", &op);
	fflush(stdin);
	  
	} while ( op == 's' || op == 'S');
    
    system("pause");
               
        
    return (0);
}
