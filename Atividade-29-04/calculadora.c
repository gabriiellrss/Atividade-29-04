#include<stdlib.h>
#include<stdio.h>




void main  () {
	
	
	int op, n1 ,n2 ,r;
	op =1;

	while (op>0){

	printf("\nEscolha uma das seguintes opcoes:\n");
	printf("1)Soma\n");
	printf("2)Subtracao\n");
	printf("3)Multiplicacao\n");
	printf("4)Divisao\n");
	printf("5)Sair\n");
	scanf("%d",&op);

	
	switch(op){
		case 1 :
			printf("Soma\n");
			printf("Digite o primeiro numero:\n");
			scanf("%d",&n1);
			printf("Digite o segundo numero:\n");
			scanf("%d",&n2);
			printf("A soma dos numeros:%d e %d resulta em: %d",n1 ,n2 , r=n1+n2);
		break;
		case 2 :
			printf("Subtracao\n");
			printf("Digite o primeiro numero:\n");
			scanf("%d",&n1);
			printf("Digite o segundo numero:\n");
			scanf("%d",&n2);
			printf("A subtracao dos numeros:%d e %d resulta em: %d",n1 ,n2 , r=n1-n2);
		break;
		case 3 :
			printf("Multiplicacao\n");
			printf("Digite o primeiro numero:\n");
			scanf("%d",&n1);
			printf("Digite o segundo numero:\n");
			scanf("%d",&n2);
			printf("A multiplicacao dos numeros:%d e %d resulta em: %d",n1 ,n2 , r=n1*n2);
		break;
		case 4 :
			printf("Divisao\n");
			printf("Digite o primeiro numero:\n");
			scanf("%d",&n1);
			printf("Digite o segundo numero:\n");
			scanf("%d",&n2);
	
			/*while(b==0){
				printf("Impossivel dividir por 0\n");
				printf("Digite o outro numero:\n");
				scanf("%d",&b);
			}*/
            
            if (n2==0){
                printf("Nao e possivel dividir por 0\n");
                printf("Digite um outro numero:\n");
				scanf("%d",&n2);
                printf("A divisao dos numeros:%d e %d resulta em: %d \n",n1 ,n2, r=n1/n2);
				break;
            }

            else {
                printf("A divisao dos numeros:%d e %d resulta em: %d \n",n1 ,n2, r=n1/n2);
                break;
            }

		case 5:
	    op = 0;
		  break;
        }
    }
 }

