// questão 02

/* a) O objetivo do programa é comparar a eficiencia entre os métodos de ordenação por inserção e ordenação por seleção. O programa funciona gerando um vetor com N inteiros e o ordenando tanto por seleção quanto por inserção. Ao fim do programa, ele imprime para o usuário quantas comparações e quantas trocas foram feitas em cada um dos métodos de ordenação. 
*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N 100

void encontra_menor_indice(const int* vec, int i_ini, int n, int* q_comp_sel, int* m_ind)
{

	for (int i = i_ini; i<n; i++)
	{
		if (vec[i]<vec[i+1]) (*q_comp_sel)++;   
		(*m_ind) = vec[i]; 
}

}
void insercao(const int* vec, int n, int* vec_out, int* q_comp_ins, int* q_troc_ins)
{

int troca; 

memcpy(vec_out, vec, n * sizeof(int));

for (int i = 1; i<n; i++)
	{

int proximo = i; 
(*q_comp_ins)++;


while ((proximo != 0) && (vec_out[proximo] < vec_out[proximo-1])) 
		{
	troca = vec_out[proximo]; 
	vec_out[proximo] = vec_out [proximo-1]; 
	vec_out[proximo-1] = troca; 
	proximo --; 
	(*q_troc_ins)++;

		}
	}
}

void selecao(const int* vec, int n, int* vec_out, int* q_comp_sel, int* q_troc_sel)
{
    int m_ind;
    int total_comp = 0;
    memcpy(vec_out, vec, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        encontra_menor_indice(vec_out, i, n, q_comp_sel, &m_ind);
        int tmp = vec_out[m_ind];
        vec_out[m_ind] = vec_out[i];
        vec_out[i] = tmp;

        total_comp += (*q_comp_sel); 
        (*q_troc_sel)++;
    }
    *q_comp_sel = total_comp;
}


int main()
{
    int i;
    int vec[N], vec_ins[N], vec_sel[N];
    int q_comp_sel = 0, q_troc_sel = 0;
    int q_comp_ins = 0, q_troc_ins = 0;

    srand(time(NULL));

    for (i = 0; i < N; i++)
        vec[i] = rand() % (10*N);

    selecao(vec, N, vec_sel, &q_comp_sel, &q_troc_sel);
    insercao(vec, N, vec_ins, &q_comp_ins, &q_troc_ins);

    printf("Selecao:\n");
    printf("Numero de comparacoes: %d\n", q_comp_sel);
    printf("Numero de trocas: %d\n", q_troc_sel);
    for (i = 0; i < N; i++)
        printf("%d ", vec[i]);	

    printf("\n");
    printf("\n");

    printf("Insercao:\n");
    printf("Numero de comparacoes: %d\n", q_comp_ins);
    printf("Numero de trocas: %d\n", q_troc_ins);
    for (i = 0; i < N; i++)
        printf("%d ", vec[i]);	
    printf("\n");

    return 0;
}



