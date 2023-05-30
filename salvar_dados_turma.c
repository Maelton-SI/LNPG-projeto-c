#include "dados.h"
#include <stdio.h>

void salvar_dados_turma(Turma **turmas, int *qtd_atual_turma){
    Turma turma[*qtd_atual_turma];

    // Pega dados da turma
    for (int i = 0; i < *qtd_atual_turma; i++)
    {
        sprintf(turma[i].codigo, "%s", turmas[i] -> codigo);
        sprintf(turma[i].nome_disciplina, "%s", turmas[i] -> nome_disciplina);
        //sprintf(turma[i].professor, "%s", turmas[i] -> professor);
        //sprintf(turma[i].media_turma, "%f", turmas[i] -> media_turma);
        
    }

    FILE *f = fopen("dados.bin", "ab");

    if (!f)
    {
        printf("Não é possível abrir o arquivo!");
        //return -1;
    }
    fwrite(turma, sizeof(turma), *qtd_atual_turma, f);
    fclose(f);
    //return 0;
}