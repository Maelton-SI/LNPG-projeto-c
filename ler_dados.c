#include "dados.h"
# include <stdio.h>

/*void ler_dados(){
    
    FILE *f = fopen("dados.bin", "rb");
    if (!f)
    {
        printf("Não é possível ler o arquivo!\n");
        //return -1;
    }

    fseek(f, 0L, SEEK_END);                  // posiciona o arquivo no final para calcular o número de registros
    int tamanho = ftell(f) / sizeof(pessoa); // Recupera o número de registros
    printf("Número de pessoas = %d\n", tamanho);
    rewind(f); // Coloca o arquivo no início para leitura
    Aluno aluno[1];
    Professor professor[1];
    Turma turma[1];
    fread(pessoas, sizeof(pessoa), 50, f);

    for (int i = 0; i < 50; i++)
    {
        printf("Nome = %s / idade = %d\n", pessoas[i].nome, pessoas[i].idade);
    }

    fclose(f);
    //return 0;
}*/