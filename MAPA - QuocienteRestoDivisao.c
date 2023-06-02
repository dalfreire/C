//Daniel Alves Freire RA 211516225
// Atividade MAPA - Algoritmo e L�gica de Programa��o II

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h> 
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
int main() 
{
	setlocale(LC_ALL, "Portuguese"); 
    
    // Declarando as vari�veis do tipo float D (Dividendo), d (divisor), r (resto), q (quociente)
    // z (parte inteira), x (resultado da divis�o D/d), y (parte fracion�ria)
    double  q, x, y, z;
    int D, d, r;
    char op;
    
    do{
    	printf("***QUOCIENTE E RESTO DE DIVIS�O***\n\n");
    	printf("Este programa retorna a voc� o quociente e o resto de uma divis�o\n\n");
    	printf("Informe o valor do Dividendo:\n");
    	scanf("%d", &D);
    	fflush(stdin);
    
    	printf("Informe o valor do Divisor:\n");
    	scanf("%d", &d);
    	fflush(stdin);
        
        // A vari�vel x recebe o resultado da divis�o a partir dos valores informados pelo usu�rio
        x = D / d;
        
        // Aqui eu uso a fun��o modf para separar a parte inteira da parte fracion�ria e armazenar 
        // a parte inteira (quociente) na vari�vel q (um ponteiro). 
        // As vari�veis envolvidas devem ser do tipo double.
        
        z = modf(x, &q);
        
        // Aqui a vari�vel r recebe o valor do resto da divis�o
        r = (D % d);  
        
            // Aqui eu uso uma condi��o para verficar se os valores est�o devidamentos guardados 
            // em mem�ria. Caso os c�lculos estejam corretos, ser� impresso na tela o valor do 
            // quociente e do resto. Caso n�o ser� exibido um alerta.
            if(D == (d*q) + r)
            {
                printf("O quociente da divis�o � %.0lf\n", q);
                printf("O resto da divis�o � %d\n\n", r);
             }
            else                                                                                                                                                             
            {
                printf("Algo de errado aconteceu! Verifique o c�digo.../n");   
            }	
            
    printf("Deseja executar novamente? Se sim, digite S e pressione ENTER.\n\n");
	scanf("%c", &op);
	fflush(stdin);
	  
	} while ( op == 's' || op == 'S');
    
    system("pause");
               
        
    return (0);
}
