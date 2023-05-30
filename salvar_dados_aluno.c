#include "dados.h"
#include <stdio.h>

void salvar_dados_aluno(Aluno **alunos, int *qtd_atual_aluno){
    Aluno aluno[*qtd_atual_aluno];
    //Endereco *endereco[*qtd_atual_aluno + *qtd_atual_professor];

    // Pega dados de aluno
    for (int i = 0; i < *qtd_atual_aluno; i++)
    {
        sprintf(aluno[i].matricula, "%s", alunos[i] -> matricula);
        sprintf(aluno[i].cpf, "%s", alunos[i] -> cpf);
        sprintf(aluno[i].nome, "%s", alunos[i] -> nome);
        //sprintf(aluno[i].endereco, "%s", alunos[i] -> endereco);
    }

    FILE *f = fopen("dados.bin", "ab");

    if (!f)
    {
        printf("Não é possível abrir o arquivo!");
        //return -1;
    }
    fwrite(aluno, sizeof(aluno), *qtd_atual_aluno, f);
    fclose(f);
    //return 0;
}