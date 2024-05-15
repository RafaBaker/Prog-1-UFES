#include <stdio.h>

double LeNotasECalculaMediaAluno() 
{
    char c = '\0';
    int nota = 0, soma = 0, qtd = 0, menorNota = 101;
    double media = 0;
    
    scanf("%*c");
    while (1)
    {
        scanf("%d%c", &nota, &c);
        soma += nota;
        qtd += 1;
        if (nota < menorNota) menorNota = nota;
        if (c == ']') break;
    }
    // jogando fora o \n
    scanf("%c", &c);

    if (qtd == 1) 
    {
        media = soma / qtd;
    }
    else 
    {
        soma = soma - menorNota;
        media = soma / (qtd-1);
    }

    return media;
}

int ContaAlunosAprovadosTurma()
{
    int a = 0, i = 0;
    int media = 0, qtdAprovados = 0;
    char c1 = '\0', c2 = '\0';

    scanf("%d", &a);
    scanf("%*[^\n]");
    scanf("%*c");
    for (; i < a; i++)
    {   
        //jogando \n fora
        scanf("%c%c", &c1, &c2);
        media = LeNotasECalculaMediaAluno();
        if (media >= 70) 
        {
            qtdAprovados += 1;
            printf("%c\n", c1);
        }
    }

    return qtdAprovados;
}

int main()
{
    int n=0, i = 1;
    int qtdAprovados = 0;
    int maiorQtdAprovados = 0, menorQtdAprovados = 9999;
    int idMaiorQtdAprovados = 0, idMenorQtdAprovados = 0;

    scanf("%d", &n);

    for (; i <= n; i++)
    {   
        printf("TURMA:%d\n", i);
        qtdAprovados = ContaAlunosAprovadosTurma();
        if (qtdAprovados < menorQtdAprovados)
        {
            menorQtdAprovados = qtdAprovados;
            idMenorQtdAprovados = i;
        }

        if (qtdAprovados > maiorQtdAprovados)
        {
            maiorQtdAprovados = qtdAprovados;
            idMaiorQtdAprovados = i;
        }
    }

    printf("MAIOR:TURMA %d MENOR:TURMA %d\n", idMaiorQtdAprovados, idMenorQtdAprovados);

    return 0;
}