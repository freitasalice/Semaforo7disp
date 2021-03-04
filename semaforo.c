/*
 * File:   semaforo.c
 * Author: Engº de Freitas
 *
 * Created on 4 de Março de 2021, 01:00
 */


#include <xc.h>


#define VERMELHO   PORTDbits.RD7 = 0
#define AMARELO    PORTDbits.RD6 = 0
#define VERDE      PORTDbits.RD5 = 0
#define VERMELHOPED   PORTDbits.RD3 = 0
#define VERDEPED   PORTDbits.RD2 = 0
#define BOTAO      PORTDbits.RD1 = 0



 

void semaforo_init (void) 
{
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD3 = 0;
    TRISDbits.TRISD2 = 0;
    TRISDbits.TRISD1 = 1;
    VERMELHO = 0;
    AMARELO = 0;
    VERDE = 0;
    VERMELHOPED = 0;
    VERDEPED = 0; 
}

void vermelho(int x)
{
    VERMELHO = x;
}

void amarelo(int x)
{
    AMARELO = x;
}

void verde(int x)
{
    VERDE = x;
}

void vermelhoped(int x)
{
    VERMELHOPED = x;    
}

void verdeped(int x)
{
    VERDEPED = x;
}

int botaoped(void)
{
    return( BOTAO );
}