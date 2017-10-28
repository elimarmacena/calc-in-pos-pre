/*
	CODIGO FEITO POR:
	ELIMAR MACENA 20161BSI0314
	HELLESANDRO GONZAGA 20161BSI0390
*/


#ifndef TADADO_H_INCLUDED
#define TADADO_H_INCLUDED
#include <stdio.h>
#include <string.h>
#include "tadListaDE.h"
#include "tadPoli.h"
//TYPES

//TIPO QUE ESTA SENDO ABSTRAIDO NA IMPLEMENTACAO

typedef *char PDado;

//ASSINATURA
PDado criaDado();
void inicDado(PDado Dado, unsigned int grau, double coef);
PDado leDado(PDado t);
PDado carregaDado(PDado t, FILE* arq);
void escreveDado(PDado t);
void salvaDado(PDado t, FILE* arq);
unsigned int  consultarGrauDado(PDado t);
double consultarCoefDado(PDado t);
int comparaDado(PDado t1, PDado t2);
char* toString(PDado t);
PDado somarDado(PDado t1, PDado t2);
PDado multiplicarDado(PDado t1, PDado t2);
PDado liberaDado(PDado t);
PDado derivaDado(PDado t1);
PDado liberaDado(PDado t);

#endif // TADADO_H_INCLUDED
