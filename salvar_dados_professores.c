#include "dados.h"
#include <stdio.h>

void salvar_dados_professor(Professor **professores, int *qtd_atual_professor){
    Professor professor[*qtd_atual_professor];
    //Endereco *endereco[*qtd_atual_aluno + *qtd_atual_professor];

    // Pega dados do Professor
    for (int i = 0; i < *qtd_atual_professor; i++)
    {
        sprintf(professor[i].matricula, "%s", professores[i] -> matricula);
        sprintf(professor[i].nome, "%s", professores[i] -> nome);
        sprintf(professor[i].cpf, "%s", professores[i] -> cpf);
        //sprintf(professor[i].endereco, "%s", professores[i] -> endereco);
        
    }

    FILE *f = fopen("dados.bin", "ab");

    if (!f)
    {
        printf("Não é possível abrir o arquivo!");
        //return -1;
    }
    fwrite(professor, sizeof(professor), *qtd_atual_professor, f);
    fclose(f);
    //return 0;
}