#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define SETA_BAIXO 80
#define SETA_CIMA 72
#define ENTER 13

//Função que remete as informações do jogo.
void SobreoJogo(){
    puts("-MOPA WARS eh um jogo online de RPG, baseado em turnos.\n"
        "-No inicio, configure seu personagem com seus pontos de habilidade.\n"
        "-Por padrao, cada personagem comeca com 25HP\n"
        "-Cabe a cada jogador atribuir seus pontos de habilidade em ataque, defesa ou HP adicional.\n"
        "-A cada turno, escolha entre atacar ou bloquear.\n"
        "-O vencedor sera o primeiro a reduzir todos os pontos de vida de seu oponente a 0.\n");
}
//Função menu do jogo.
int Menu(){
    int posicao = 1, tecla;

    while(1){
        system("cls");
        if(posicao == 1){
            printf("Escolha uma opcao:\n");
            printf("\t%s[1] - Comecar o jogo. \n", (posicao == 1) ? ">>" : "  ");
            printf("%s[2] - Sobre o jogo. \n", (posicao == 2) ? ">>" : "  ");
            printf("%s[3] - Sair do jogo. \n", (posicao == 3) ? ">>" : "  ");

            tecla = getch();

            if(tecla == SETA_BAIXO)
                posicao++;
            else if(tecla == SETA_CIMA)
                posicao = 3;
            else if(tecla == ENTER)
                break;
        }
        else if(posicao == 2){
            printf("Escolha uma opcao:\n");
            printf("%s[1] - Comecar o jogo. \n", (posicao == 1) ? ">>" : "  ");
            printf("\t%s[2] - Sobre o jogo. \n", (posicao == 2) ? ">>" : "  ");
            printf("%s[3] - Sair do jogo. \n", (posicao == 3) ? ">>" : "  ");

            tecla = getch();

            if(tecla == SETA_BAIXO)
                posicao++;
            else if(tecla == SETA_CIMA)
                posicao--;
            else if(tecla == ENTER)
                break;
        }
        else if(posicao == 3){
            printf("Escolha uma opcao:\n");
            printf("%s[1] - Comecar o jogo. \n", (posicao == 1) ? ">>" : "  ");
            printf("%s[2] - Sobre o jogo. \n", (posicao == 2) ? ">>" : "  ");
            printf("\t%s[3] - Sair do jogo. \n", (posicao == 3) ? ">>" : "  ");

            tecla = getch();

            if(tecla == SETA_BAIXO)
                posicao = 1;
            else if(tecla == SETA_CIMA)
                posicao--;
            else if(tecla == ENTER)
                break;
        }
    }

    return posicao;
}
