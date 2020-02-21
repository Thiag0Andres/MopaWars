#ifndef ESTRUTURA_H_INCLUDED
#define ESTRUTURA_H_INCLUDED

typedef struct{
    int atk, def, life, pontos;
    char name[100], class[100];
    }tStatus;

extern void Tiraenter(char *name);
extern tStatus atributos();
extern int OpPlayer1(tStatus player1, tStatus player2);
extern int OpPlayer2(tStatus player1, tStatus player2);
extern int Chances(tStatus *player1, tStatus *player2);
extern int EsquivaP1(tStatus *player1, tStatus *player2);
extern int EsquivaP2(tStatus *player1, tStatus *player2);
extern void Combate(int op1, int op2, tStatus *player1, tStatus *player2);
extern void Jogo(tStatus player1, tStatus player2);

#endif // ESTRUTURA_H_INCLUDED
