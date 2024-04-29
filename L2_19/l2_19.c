#include <stdio.h>

int maiorValor (int a, int b, int c) {
    int maior = 0;

    if (a > maior) {
        maior = a;
    }
    
    if (b > maior) {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }

    return maior;
}

int menorValor(int a, int b, int c) {
    int menor = 11;

    if (a < menor) {
        menor = a;
    }
    
    if (b < menor) {
        menor = b;
    }

    if (c < menor) {
        menor = c;
    }

    return menor;
}

int valorMeio (int a, int b, int c) {
    int meio = 0, maior = 0, menor = 0;

    maior = maiorValor(a, b, c);
    menor = menorValor(a, b, c);

    if (!(a == menor || a == maior)) {
        meio = a;
    }

    if (!(b == menor || b == maior)) {
        meio = b;
    }

    if (!(c == menor || c == maior)) {
        meio = c;
    }

    return meio;
}

int main () {
    int qtd, id, maiorIDM = 0, maiorIDF = 0, maiorM = 0, maior2M = 0, maior3M = 0,
     maiorF = 0, maior2F = 0, maior3F = 0;
    int piorIDM = 1, piorNotaM1 = 11, piorNotaM2 = 11, piorNotaM3 = 11, piorIDF = -1, piorNotaF1 = 11, piorNotaF2 = 11, piorNotaF3 = 11;
    int nota1, nota2, nota3;
    int maiornota1A, maiornota2A, maiornota3A;
    int somaNotasM = 0, somaNotasF = 0, delegCampeaoNotasM = 0, delegCampeaoIDM = 0, delegCampeaoNotasF = 0, delegCampeaoIDF = 0;
    char sexo;
    int i = 1;

    scanf("%d", &qtd);
    for (;i <= qtd; i++) {
        
        while (1) {
            scanf("%d", &id);
            if (id == -1) {
                break;
            }
            scanf("%c %d %d %d", &sexo, &nota1, &nota2, &nota3);
            // Organizar as notas em ordem e armarzenar elas em maiornota1A, maiornota2A, maiornota3A
            maiornota1A = maiorValor(nota1, nota2, nota3);
            maiornota2A = menorValor(nota1, nota2, nota3);
            maiornota3A = valorMeio(nota1, nota2, nota3);

            if (sexo == 'M') {
                somaNotasM += maiornota1A;
                if (maiornota1A > maiorM) {
                    maiorM = maiornota1A;
                    maior2M = maiornota2A;
                    maior3M = maiornota3A;
                    maiorIDM = id;
                } else if (maiornota1A == maiorM) {
                    if (maiornota2A > maior2M) {
                        maior2M = maiornota2A;
                        maior3M = maiornota3A;
                        maiorIDM = id;
                    } else if (maiornota2A == maior2M) {
                        if (maiornota3A > maior3M) {
                            maior3M = maiornota3A;
                            maiorIDM = id;
                        } else if (maiornota3A > maior3M) {
                            if (id < maiorIDM) maiorIDM = id;
                        }
                    } 
                } else if (maiornota1A < piorNotaM1) {
                    piorNotaM1 = maiornota1A;
                    piorNotaM2 = maiornota2A;
                    piorNotaM3 = maiornota3A;
                    piorIDM = id;
                } else if (maiornota1A == piorNotaM1) {
                    if (maiornota2A < piorNotaM2) {
                        piorNotaM2 = maiornota2A;
                        piorNotaM3 = maiornota3A;
                        piorIDM = id;
                    } else if (maiornota2A == piorNotaM2) {
                        if (maiornota3A < piorNotaM3) {
                            piorNotaM3 = maiornota3A;
                            piorIDM = id;
                        } else if (maiornota3A == piorNotaM3) {
                            if (id > piorIDM) piorIDM = id;
                        }
                    }
                }
            } else {
                somaNotasF += maiornota1A;
                if (maiornota1A > maiorF) {
                    maiorF = maiornota1A;
                    maior2F = maiornota2A;
                    maior3F = maiornota3A;
                    maiorIDF = id;
                } else if (maiornota1A == maiorF) {
                    if (maiornota2A > maior2F) {
                        maior2F = maiornota2A;
                        maior3F = maiornota3A;
                        maiorIDF = id;
                    } else if (maiornota2A == maior2F) {
                        if (maiornota3A > maior3F) {
                            maior3F = maiornota3A;
                            maiorIDF = id;
                        } else if (maiornota3A > maior3F) {
                            if (id < maiorIDF) maiorIDF = id;
                        }
                    } 
                } else if (maiornota1A < piorNotaF1) {
                    piorNotaF1 = maiornota1A;
                    piorNotaF2 = maiornota2A;
                    piorNotaF3 = maiornota3A;
                    piorIDF = id;
                } else if (maiornota1A == piorNotaF1) {
                    if (maiornota2A < piorNotaF2) {
                        piorNotaF2 = maiornota2A;
                        piorNotaF3 = maiornota3A;
                        piorIDF = id;
                    } else if (maiornota2A == piorNotaF2) {
                        if (maiornota3A < piorNotaF3) {
                            piorNotaF3 = maiornota3A;
                            piorIDF = id;
                        } else if (maiornota3A == piorNotaF3) {
                            if (id > piorIDF) piorIDF = id;
                        }
                    }
                }
            }
        }

        if (somaNotasF > delegCampeaoNotasF) {
            delegCampeaoNotasF = somaNotasF;
            delegCampeaoIDF = i;
        }

        if (somaNotasM > delegCampeaoNotasM) {
            delegCampeaoNotasM = somaNotasM;
            delegCampeaoIDM = i;
        }

        somaNotasF = 0;
        somaNotasM = 0;

        printf("MELHORES ATLETAS DA DELEGACAO %d\n", i);
        printf("MASCULINO: %d ", maiorIDM);
        printf("FEMININO: %d\n", maiorIDF);
        printf("PIORES ATLETAS DA DELEGACAO %d\n", i);
        printf("MASCULINO: %d ", piorIDM);
        printf("FEMININO: %d\n", piorIDF);
        printf("\n");

        maiorIDM = 0, maiorIDF = 0, maiorM = 0, maior2M = 0, maior3M = 0, maiorF = 0, maior2F = 0, maior3F = 0;
        piorIDM = -1, piorNotaM1 = 11, piorNotaM2 = 11, piorNotaM3 = 11, piorIDF = -1, piorNotaF1 = 11, piorNotaF2 = 11, piorNotaF3 = 11;
    }

    printf("DELEGACAO CAMPEA:\n");
    printf("MASCULINO: %d FEMININO: %d", delegCampeaoIDM, delegCampeaoIDF);

    return 0;
}