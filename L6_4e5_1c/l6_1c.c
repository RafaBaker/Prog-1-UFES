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
int ComparaID(tPacote pacote, int n);
int PegaIDMsg(tPacote pacote);
int PegaIDPack(tPacote pacote);
void ImprimeMensagemPacote(tPacote pacote);

typedef struct 
{
    tPacote pacotes[100];
} tMensagens;

tMensagens LeMensagens(int qtd);
void ImprimeMensagens(tMensagens mensagens, int qtd);
tMensagens OrganizaMensagens(tMensagens mensagens, int qtd);

int main ()
{
    int n,i;
    tPacote pacote;
    tMensagens mensagens;
    scanf("%d", &n);

    mensagens = LeMensagens(n);
    ImprimeMensagens(mensagens, n);

    return 0;
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

int ComparaID(tPacote pacote, int n)
{
    return pacote.idMsg == n;
}

int PegaIDMsg(tPacote pacote)
{
    return pacote.idMsg;
}

int PegaIDPack(tPacote pacote)
{
    return pacote.idPack;
}

void ImprimeMensagemPacote(tPacote pacote)
{
    printf("%s", pacote.msg);
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
    pacote.tamMsg = tamMsg;

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
    pacote.codErro = codErro;
    
    return pacote;
}

tMensagens LeMensagens(int qtd)
{
    int i;
    tPacote pacote;
    tMensagens mensagens;

    for (i = 0; i < qtd; i++)
    {
        pacote = LePacote();
        mensagens.pacotes[i] = pacote;
    }

    return mensagens;

}

tMensagens OrganizaMensagens(tMensagens mensagens, int qtd)
{
    int i;
    int j;
    int min;
    tPacote aux;
    for (i = 0; i < qtd-1; i++) {
        //O menor sempre vai estar no inicio, então para descobrir o minimo é necessario começar do indice i
        min = i;
        //For para achar o index do menor
        for (j = i+1; j < qtd; j++)
            if (PegaIDMsg(mensagens.pacotes[j]) < PegaIDMsg(mensagens.pacotes[min]))
                min = j;
            else if (PegaIDMsg(mensagens.pacotes[j]) == PegaIDMsg(mensagens.pacotes[min]))
                if (PegaIDPack(mensagens.pacotes[j]) < PegaIDPack(mensagens.pacotes[min]))
                    min = j;
        //Trocando o valor do index i (atual) pelo menor, assim colocando o menor na primeira posição 
        aux = mensagens.pacotes[i]; 
        mensagens.pacotes[i] = mensagens.pacotes[min]; 
        mensagens.pacotes[min] = aux; 
   }

   return mensagens;
}

void ImprimeMensagens(tMensagens mensagens, int qtd)
{
    int i, j;
    mensagens = OrganizaMensagens(mensagens, qtd);
    j = PegaIDMsg(mensagens.pacotes[0]);

    for (i = 0; i < qtd; i++)
    {
        if (PegaIDMsg(mensagens.pacotes[i]) != j)
        {
            printf("\n");
            j++;
        }
        if (VerificaErro(mensagens.pacotes[i]))
            printf("##FALHA##");
        else
        {
            ImprimeMensagemPacote(mensagens.pacotes[i]);
        }
    }
}