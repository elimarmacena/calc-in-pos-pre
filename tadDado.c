/*
	CODIGO FEITO POR:
	ELIMAR MACENA 20161BSI0314
	HELLESANDRO GONZAGA 20161BSI0390
*/

#include <stdio.h>
#include <stdlib.h>
#include "tadDado.h"

//ALOCA MEMORIA PARA UM TIPO ABSTRATO DE DADOS
//CASO O DADO MUDE APENAS ALTERAR SIZEOF ASSIM EVITANDO ALTERA�AO EM OUTRAS FUNCOES
PDado criaDado(){
    PDado dado;
    dado=(PDado) malloc(sizeof(TDado));
    if (dado!=NULL){
        return dado;
    }
    else{
        printf("nao existe memoria suficiente");
        exit(1);
    }
}

