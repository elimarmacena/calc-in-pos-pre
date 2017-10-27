#include "tadPilha.h"

/*
	CODIGO FEITO POR:
	ELIMAR MACENA 20161BSI0314
	HELLESANDRO GONZAGA 20161BSI0390
*/

//aloca memoria pra a pilha
PPil inicPilha(){
    return (PPil)inicLista();
}


//sempre adiciona os dados no fim da pilha (topo)
PPil empilha(PPil pilha, PInfo dado){
    return anxLista(pilha,dado);
}


//remove o termo do topo
PPil desempilha(PPil pilha){
    return elmListaPos(pilha, tamLista(pilha));
}

PInfo consultaTopo(PPil pilha){
	return pilha->ult->dado;
}

PPil destroiPilha(PPil pilha){
	Pno bufferNo;
	bufferNo = pilha->ult->prev; //o no anterior ao topo
	pilha->janela = pilha->ult;
	for (int i = 0; i < pilha->len; i++){
		if (bufferNo != NULL){
			free(pilha->janela->dado); //libera a memoria do PInfo
			pilha->janela->dado = NULL;
			free(pilha->janela); //libera a memoria do PNo
			pilha->janela=bufferNo; //janela apontando para o no anterior ao que foi liberado
			bufferNo=bufferNo->prev;
		}
		else{
			free(pilha->janela->dado); //libera a memoria do PInfo
			pilha->janela->dado = NULL;
			free(pilha->janela); //libera a memoria do PNo
			pilha->janela = NULL;
		}
	}
	free(pilha); //libera a memoria do PPil
	pilha = NULL;
	return pilha;
}

