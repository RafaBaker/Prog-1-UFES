#include <stdio.h>

#define TAM_MSG 10
#define TAM_ID 4

typedef struct
{
    int idMsg;
    int idPack;
    int tamMsg;
    char msg[TAM_MSG];
    int codErro;
} tPacote;

tPacote LePacote();
void ImprimePacote(tPacote pacote);
int VerificaErro(tPacote pacote);

int main ()
{
    int n,i;
    tPacote pacote;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        pacote = LePacote();
        if (VerificaErro(pacote))
        {
            printf("FALHA!\n");
            continue;
        }
        ImprimePacote(pacote);
        printf("\n");
    }


    return 0;
}

tPacote LePacote()
{
    char ids[TAM_ID];
    char c;
    int tamMsg;
    int idMsg;
    int idPack;
    int codErro;
    char msg[TAM_MSG];
    int i;
    tPacote pacote;

    scanf("%4s", ids);
    sscanf(ids, "%d", &idMsg);
    scanf("%4s ", ids);
    sscanf(ids, "%d", &idPack);

    scanf("%c", &c);
    tamMsg = c - '0';

    for (i = 0; i < tamMsg; i++)
    {
        scanf("%c", &c);
        pacote.msg[i] = c;
    }
    pacote.msg[i] = '\0';

    for (; i < TAM_MSG; i++)
    {
        scanf("%c", &c);
    }

    scanf("%4s", ids);
    sscanf(ids, "%d", &codErro);

    pacote.idMsg = idMsg;
    pacote.idPack = idPack;
    pacote.tamMsg = tamMsg;
    pacote.codErro = codErro;
    
    return pacote;
}

void ImprimePacote(tPacote pacote)
{
    printf("PCT: %d,%d,%d,%s,%d", pacote.idMsg, pacote.idPack, pacote.tamMsg, pacote.msg, pacote.codErro);
}

int VerificaErro(tPacote pacote)
{
    int soma = 0;
    int i;

    soma = pacote.idMsg + pacote.idPack + pacote.tamMsg;

    for (i = 0; i < pacote.tamMsg; i++)
    {
        soma += pacote.msg[i];
    }

    return soma != pacote.codErro;
}