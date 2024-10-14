#include <stdio.h>
int main(){

    int n, i;
    float m, nota, MaiorNota=0, MelhorAluno;

    scanf("%d", &n);
    if (n>=3 && n<=100){
        
        for (i=0; i<n; i++){

            scanf("%f", &m);
            if (m>0 && m<1000000){

                scanf("%f", &nota);
                if (nota>=0 && nota<=10){

                    if (nota>MaiorNota){

                        MaiorNota=nota;
                        MelhorAluno=m;                        
                    }
                }   
            }           
        }       
    } 
    if (MaiorNota>=8){
       printf("%.0f\n", MelhorAluno);  
    }else{
     printf("Minimum note not reached\n");
    }
    
    return 0;
}
