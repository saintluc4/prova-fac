/*
Uma universidade deseja fazer um levantamento a
respeito do seu processo seletivo. Para cada curso,
portanto, é fornecido o seguinte conjunto de
valores: código, número de vagas, quantidade de
inscritos do gênero masculino e do gênero feminino.
Elaborar um programa que:
  * Exiba, para cada curso, o seu código, a relação de
  candidatos por vaga e o percentual de
  candidatas;
  * Determine o maior número de candidatos por
  vaga e escreva esse valor, juntamente com o
  código do curso correspondente (supor que não
  haja empate);
  * Código do curso que apresenta menor
  quantitativo de candidatos do gênero masculino.

Nota: a leitura deve ser concluída no momento que
for digitado 0 para o código do curso.

*/

//------------------------------------------------------------------------//
#include <stdio.h>

    int codigo, vagas, masculino, feminino;
    int qtd_cursos = 0;
    float maior_cand_vaga = 0;
    int cod_maior_cand_vaga = 0;
    int menor_masculino = -1;
    int cod_menor_masculino = 0;


void main() {
    
    printf("Digite os dados dos cursos (codigo 0 para encerrar):\n");
    
    while(1) {
        printf("\nCodigo do curso: ");
        scanf("%d", &codigo);
        
        if(codigo == 0) {
            break;
        }
        
        printf("Numero de vagas: ");
        scanf("%d", &vagas);
        
        printf("Quantidade de inscritos masculinos: ");
        scanf("%d", &masculino);
        
        printf("Quantidade de inscritos femininos: ");
        scanf("%d", &feminino);
        
        qtd_cursos++;
       
        int total_inscritos;
        float cand_por_vaga;
        float perc_feminino;
        
        total_inscritos = masculino + feminino;
        cand_por_vaga = (float)total_inscritos / vagas;
        perc_feminino = (feminino * 100.0) / total_inscritos;
        
        printf("\nCurso %d:\n", codigo);
        
        printf("Candidatos por vaga: %.2f\n", cand_por_vaga);
        
        printf("Percentual de candidatas: %.2f%%\n", perc_feminino);
        
        if(cand_por_vaga > maior_cand_vaga || qtd_cursos == 1) {
            maior_cand_vaga = cand_por_vaga;
            cod_maior_cand_vaga = codigo;
        }
        
        if(masculino < menor_masculino || menor_masculino == -1) {
            menor_masculino = masculino;
            cod_menor_masculino = codigo;
        }
    }
    
    if(qtd_cursos > 0) {
        printf("Maior numero de candidatos por vaga: %.2f (Curso %d)\n", maior_cand_vaga, cod_maior_cand_vaga);
        
        printf("Curso com menor quantitativo masculino: %d (%d candidatos)\n", cod_menor_masculino, menor_masculino);
        
    }   else {
            printf("Nenhum curso foi informado.\n");
        }
}
//------------------------------------------------------------------------//
