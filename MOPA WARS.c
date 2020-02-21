/*
MOPA Wars Online
Produtores: Arthur Dionizio, Arthur Ruan, Samuel Laerte, Thiago Palacios.
versão alpha: 0.6
*/

#include "estrutura.h"
#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

//Função main.
int main(void){

    tStatus status, player1, player2;
    int flagmenu=0;

    while(1){

        switch(Menu()){
            case 1:
                flagmenu=1;
                system("cls");
                player1 = atributos();
                system("cls");
                player2 = atributos();
                system("cls");

                printf("\nTalentos jogador %s:\nAtaque: %d\nDefesa: %d\nvida: %d\n", player1.name, player1.atk, player1.def, player1.life);
                printf("\nTalentos jogador %s:\nAtaque: %d\nDefesa: %d\nvida: %d\n", player2.name, player2.atk, player2.def, player2.life);

                system("pause");
                system("cls");

                Jogo(player1 , player2);

                break;
            case 2:
                system("cls");
                SobreoJogo();
                system("pause");
                break;
            case 3:
                return 0;
        }
        if(flagmenu)
            break;
    }
    return 0;
}
