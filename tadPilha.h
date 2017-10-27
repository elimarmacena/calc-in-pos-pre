/*
	CODIGO FEITO POR:
	ELIMAR MACENA 20161BSI0314
	HELLESANDRO GONZAGA 20161BSI0390
*/


#ifndef TADPILHA_H_INCLUDED
#define TADPILHA_H_INCLUDED

#include "tadListaDE.h"
//TYPES

/*o topo da pilha foi determinado como o ultimo termo dela, assim todas as operacoes sao trabalhadas assim, removendo e adicionando o ultimo*/
typedef PLista PPil;

//ASSINATURA FUNCOES

PPil inicPilha();
PPil desempilha(PPil pilha);
PPil empilha(PPil pilha, PInfo dado);
PInfo consultaTopo(PPil pilha);
PPil destroiPilha(PPil pilha);

#endif // TADPILHA_H_INCLUDEDms
