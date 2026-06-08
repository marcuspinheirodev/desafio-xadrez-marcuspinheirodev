#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

void menu_peca(int *peca){
    printf("Selecione a peca que deseja movimentar...\n");
    printf("1 - Torre.\n");
    printf("2 - Bispo.\n");
    printf("3 - Rainha.\n");
    printf("4 - Cavalo.\n");
    printf("5 - Sair.\n");
    scanf("%d", peca);
}
void menu_torre(int *direcao){
    printf("Selecione para qual direcao deseja mover a Torre...\n");
    printf("1 - Cima.\n");
    printf("2 - Baixo.\n");
    printf("3 - Esquerda.\n");
    printf("4 - Direita.\n");
    scanf("%d", direcao);
}
void menu_bispo(int *direcao){
    printf("Selecione para qual direcao deseja mover o Bispo...\n");
    printf("1 - Diagonal direita para cima.\n");
    printf("2 - Diagonal direita para baixo.\n");
    printf("3 - Diagonal esquerda para cima.\n");
    printf("4 - Diagonal esquerda para baixo.\n");
    scanf("%d", direcao);
}
void menu_rainha(int *direcao){
    printf("Selecione para qual direcao deseja mover a Rainha...\n");
    printf("1 - Cima.\n");
    printf("2 - Baixo.\n");
    printf("3 - Esquerda.\n");
    printf("4 - Direita.\n");
    printf("5 - Diagonal direita para cima.\n");
    printf("6 - Diagonal direita para baixo.\n");
    printf("7 - Diagonal esquerda para cima.\n");
    printf("8 - Diagonal esquerda para baixo.\n");
    scanf("%d", direcao);
}
void menu_cavalo(int *direcao){
    printf("Selecione para qual direcao deseja mover a Cavalo...\n");
    printf("1 - Cima direita.\n");
    printf("2 - Cima esquerda.\n");
    printf("3 - Baixo direita.\n");
    printf("4 - Baixo esquerda.\n");
    printf("5 - Direita cima.\n");
    printf("6 - Direita baixo.\n");
    printf("7 - Esquerda cima.\n");
    printf("8 - Esquerda baixo.\n");
    scanf("%d", direcao);
}
void movimento(int *movimentos){
    printf("Quantos movimentos deseja fazer?");
    scanf("%d", movimentos);

    if(*movimentos > 5 || *movimentos < 1){
        printf("Voce so pode fazer ate 5 movimentos...\n");
        *movimentos = 0
            
    }else{
        printf("A peça está se movimentando...\n");
    }
}

int main(){

    int peca = 0, torre = 0, bispo = 0, rainha = 0, cavalo = 0, movimentos = 0;
    while(peca != 5){
        
        menu_peca(&peca);

        if(peca == 1){

            menu_torre(&torre);

            if(torre == 1){

                movimento(&movimentos);

                for (int i = 1 ; i <= movimentos ; i++){

                    printf("Cima...\n");
                }

                printf("Movimento encerrado.\n");

            }else if(torre == 2){

                movimento(&movimentos);

                for(int i = 1 ; i <= movimentos ; i++){

                    printf("Baixo...\n");
                }

                printf("Movimento encerrado.\n");

            }else if(torre == 3){

                movimento(&movimentos);

                for(int i = 1 ; i <= movimentos ; i++){

                    printf("Esquerda...\n");
                }

                printf("Movimento encerrado.\n");
            
            }else if(torre == 4){

                movimento(&movimentos);

                for(int i = 1 ; i <= movimentos ; i++){

                    printf("Direita...\n");
                }

                printf("Movimento encerrado.\n");
            
            }else{

                printf("Insira uma opcao valida...\n");

            }
        
        }else if(peca == 2){
        
            menu_bispo(&bispo);

            if(bispo == 1){

                movimento(&movimentos);

                for(int i = 1 ; i <= movimentos ; i++){

                    printf("Diagonal direita para cima...\n");    

                }

                printf("Movimento encerrado...\n");

            }else if(bispo == 2){

                movimento(&movimentos);

                for(int i = 1 ; i <= movimentos ; i++){

                    printf("Diagonal direita para baixo...\n");    

                }

                printf("Movimento encerrado...\n");

            }else if(bispo == 3){

                movimento(&movimentos);

                for(int i = 1 ; i <= movimentos ; i++){

                    printf("Diagonal esquerda para cima...\n");    

                }

                printf("Movimento encerrado...\n");

            }else if(bispo == 4){

                movimento(&movimentos);

                for(int i = 1 ; i <= movimentos ; i++){

                    printf("Diagonal esquerda para baixo...\n");    

                }

                printf("Movimento encerrado...\n");


            }else{

                printf("Insira uma opcao valida...\n");

            }
        
        }else if(peca == 3){

            menu_rainha(&rainha);

            if(rainha == 1){

                movimento(&movimentos);

                for(int i = 1 ; i <= movimentos ; i++){

                    printf("Cima...\n");    

                }

                printf("Movimento encerrado...\n");

            }else if(rainha == 2){

                movimento(&movimentos);

                for(int i = 1 ; i <= movimentos ; i++){

                    printf("Baixo...\n");    

                }

                printf("Movimento encerrado...\n");
                
            }else if(rainha == 3){

                movimento(&movimentos);

                for(int i = 1 ; i <= movimentos ; i++){

                    printf("Esquerda...\n");    

                }

                printf("Movimento encerrado...\n");

            }else if(rainha == 4){

                movimento(&movimentos);

                for(int i = 1 ; i <= movimentos ; i++){

                    printf("Direita...\n");    

                }

                printf("Movimento encerrado...\n");

            }else if(rainha == 5){

                movimento(&movimentos);

                for(int i = 1 ; i <= movimentos ; i++){

                    printf("Diagonal direita para cima...\n");    

                }

                printf("Movimento encerrado...\n");

            }else if(rainha == 6){

                movimento(&movimentos);

                for(int i = 1 ; i <= movimentos ; i++){

                    printf("Diagonal direita para baixo...\n");    

                }

                printf("Movimento encerrado...\n");

            }else if(rainha == 7){

                movimento(&movimentos);

                for(int i = 1 ; i <= movimentos ; i++){

                    printf("Diagonal esquerda para cima...\n");    

                }

                printf("Movimento encerrado...\n");

            }else if(rainha == 8){

                movimento(&movimentos);

                for(int i = 1 ; i <= movimentos ; i++){

                    printf("Diagonal esquerda para baixo...\n");    

                }

                printf("Movimento encerrado...\n");

            }else{

                printf("Insira uma opcao valida.");

            }

        }else if(peca == 4){

            menu_cavalo(&cavalo);

            if(cavalo == 1){

                printf("A peca esta se movimentando...\n");
                printf("Cima\nCima\nDireita\n");
                printf("Movimento encerrado...");
        
            }else if(cavalo == 2){

                printf("A peca esta se movimentando...\n");
                printf("Cima\nCima\nEsquerda\n");
                printf("Movimento encerrado...");

            }else if(cavalo == 3){

                printf("A peca esta se movimentando...\n");
                printf("Baixo\nBaixo\nDireita\n");
                printf("Movimento encerrado...");

            }else if(cavalo == 4){

                printf("A peca esta se movimentando...\n");
                printf("Baixo\nBaixo\nEsquerda\n");
                printf("Movimento encerrado...");

            }else if(cavalo == 5){

                printf("A peca esta se movimentando...\n");
                printf("Direita\nDireita\nCima\n");
                printf("Movimento encerrado...");

            }else if(cavalo == 6){

                printf("A peca esta se movimentando...\n");
                printf("Direita\nDireita\nBaixo\n");
                printf("Movimento encerrado...");

            }else if(cavalo == 7){

                printf("A peca esta se movimentando...\n");
                printf("Esquerda\nEsquerda\nCima\n");
                printf("Movimento encerrado...");

            }else if(cavalo == 8){

                printf("A peca esta se movimentando...\n");
                printf("Esquerda\nEsquerda\nBaixo\n");
                printf("Movimento encerrado...");

            }else{

                printf("Insira uma opcao valida...\n");

            }
        }
    }
    return 0;
}
