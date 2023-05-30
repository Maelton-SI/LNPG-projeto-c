#include "menus.h"
#include "tratadores.h"
#include "dados.h"
#include <stdio.h>
#include "constantes.h"

int op_menu_principal = 0;

Aluno *alunos[MAX_ALUNO] = {NULL};
Professor *professores[MAX_PROFESSOR] = {NULL};
Turma *turmas[MAX_TURMAS] = {NULL};

int qtd_atual_aluno = 0;
int qtd_atual_professor = 0;
int qtd_atual_turma = 0;

int main(int argc, char const *argv[])
{

    FILE *arquivo = fopen("alunos.txt", "rb");
    if (arquivo)
    {
        Aluno aluno;
        while (fread(&aluno, sizeof(Aluno), 1, arquivo) == 1)
        {
            // Faça algo com os dados lidos do arquivo
            // Por exemplo, exiba os valores na tela
            printf("Matrícula: %s\n", aluno.matricula);
            printf("CPF: %s\n", aluno.cpf);
            printf("Nome: %s\n", aluno.nome);
            printf("\n");
        }
        fclose(arquivo);
    }
    else
    {
        printf("ERRO: não foi possível abrir o arquivo.\n\n");
    }

    do
    {
        op_menu_principal = menu_principal();
        switch (op_menu_principal)
        {
        case 1:
            tratador_menu_aluno(alunos, &qtd_atual_aluno);

            break;
        // TODO: add menus professor and turma
        case 2:
            tratador_menu_professor(professores, &qtd_atual_professor);
            break;
        case 3:
            tratador_menu_turma(turmas, &qtd_atual_turma, professores, &qtd_atual_professor);
            break;
        case 4:
            tratador_menu_estatistica(turmas, professores, &qtd_atual_professor, &qtd_atual_turma);
            break;
        case 5:
            printf("Finalizando app...\n\n");
        }
    } while (op_menu_principal != 5);
    return 0;
}
