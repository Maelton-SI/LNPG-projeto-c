#ifndef _TRATADORES_H_
#define _TRATADORES_H_

#include "dados.h"

//Tradores de menu
void tratador_menu_turma(Turma **turmas, int *qtd_atual_turma, Professor **professores, int *qtd_atual_professores);
void tratador_menu_estatistica(Professor **professores, int *qtd_atual_professores);
void tratador_menu_professor(Professor **professores, int *qtd_atual_professor);
void tratador_menu_aluno(Aluno **alunos, int *qtd_atual_aluno);

//Funções de construção
Turma *construir_turma(Professor **professores);
Professor *construir_professor();
Endereco *construir_endereco();
Aluno *construir_aluno();

//Funções de impressão
void imprimir_professor(Professor *professor);
void imprimir_turma(Turma *turma);
void imprimir_aluno(Aluno *aluno);
void imprimir_endereco(Endereco *endereco);

//Funções de busca
Turma *buscar_turma(Turma **turmas, int *posicao);
Professor *buscar_professor(Professor **professores, int *posicao);
Aluno *buscar_aluno(Aluno **alunos, int *posicao);

//Funções de update
void atualizacao_aluno(Aluno *aluno, Endereco *end);
void atualizacao_endereco(Aluno *aluno, Endereco *end);
void atualizacao_turma(Turma *tuma, Professor **professores);

#endif