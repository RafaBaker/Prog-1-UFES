#include <stdio.h>

int main () {
    int qtd = 0, id = 0, maiorIDM = 0, maiorIDF = 0, maiorM = 0, maior2M = 0, maior3M = 0,
     maiorF = 0, maior2F = 0, maior3F = 0;
    int piorIDM = 1, piorNotaM1 = 11, piorNotaM2 = 11, piorNotaM3 = 11, piorIDF = -1, piorNotaF1 = 11, piorNotaF2 = 11, piorNotaF3 = 11;
    int nota1 = 0, nota2 = 0, nota3 = 0;
    // int nota1 = 0, nota2 = 0, nota3 = 0;
    int somaNotasM = 0, somaNotasF = 0, delegCampeaoNotasM = 0, delegCampeaoIDM = 0, delegCampeaoNotasF = 0, delegCampeaoIDF = 0;
    char sexo;
    int i = 1, tmp = 0;

    scanf("%d", &qtd);
    for (;i <= qtd; i++) {
        
        while (1) {
            scanf("%d", &id);
            if (id == -1) {
                break;
            }
            scanf(" %c %d %d %d", &sexo, &nota1, &nota2, &nota3);
            // Organizar as notas em ordem e armarzenar elas em nota1, nota2, nota3
            // nota1 = maiorValor(nota1, nota2, nota3);
            // nota2 = valorMeio(nota1, nota2, nota3);
            // nota3 = menorValor(nota1, nota2, nota3);
            // organizando as notas em ordem crescente
            if (nota1 < nota2) {
                tmp = nota2;
                nota2 = nota1;
                nota1 = tmp;
            }
            if (nota1 < nota3) {
                tmp = nota3;
                nota3 = nota1;
                nota1 = tmp;
            }
            if (nota2 < nota3) {
                tmp = nota3;
                nota3 = nota2;
                nota2 = tmp;
            }

            if (sexo == 'M') {
                somaNotasM += nota1;
                if (nota1 > maiorM) {
                    maiorM = nota1;
                    maior2M = nota2;
                    maior3M = nota3;
                    maiorIDM = id;
                } else if (nota1 == maiorM) {
                    if (nota2 > maior2M) {
                        maior2M = nota2;
                        maior3M = nota3;
                        maiorIDM = id;
                    } else if (nota2 == maior2M) {
                        if (nota3 > maior3M) {
                            maior3M = nota3;
                            maiorIDM = id;
                        } else if (nota3 > maior3M) {
                            if (id < maiorIDM) maiorIDM = id;
                        }
                    } 
                } 
                if (nota1 < piorNotaM1) {
                    piorNotaM1 = nota1;
                    piorNotaM2 = nota2;
                    piorNotaM3 = nota3;
                    piorIDM = id;
                } else if (nota1 == piorNotaM1) {
                    if (nota2 < piorNotaM2) {
                        piorNotaM2 = nota2;
                        piorNotaM3 = nota3;
                        piorIDM = id;
                    } else if (nota2 == piorNotaM2) {
                        if (nota3 < piorNotaM3) {
                            piorNotaM3 = nota3;
                            piorIDM = id;
                        } else if (nota3 == piorNotaM3) {
                            if (id > piorIDM) piorIDM = id;
                        }
                    }
                }
            } else {
                somaNotasF += nota1;
                if (nota1 > maiorF) {
                    maiorF = nota1;
                    maior2F = nota2;
                    maior3F = nota3;
                    maiorIDF = id;
                } else if (nota1 == maiorF) {
                    if (nota2 > maior2F) {
                        maior2F = nota2;
                        maior3F = nota3;
                        maiorIDF = id;
                    } else if (nota2 == maior2F) {
                        if (nota3 > maior3F) {
                            maior3F = nota3;
                            maiorIDF = id;
                        } else if (nota3 > maior3F) {
                            if (id < maiorIDF) maiorIDF = id;
                        }
                    } 
                } 
                if (nota1 < piorNotaF1) {
                    piorNotaF1 = nota1;
                    piorNotaF2 = nota2;
                    piorNotaF3 = nota3;
                    piorIDF = id;
                } else if (nota1 == piorNotaF1) {
                    if (nota2 < piorNotaF2) {
                        piorNotaF2 = nota2;
                        piorNotaF3 = nota3;
                        piorIDF = id;
                    } else if (nota2 == piorNotaF2) {
                        if (nota3 < piorNotaF3) {
                            piorNotaF3 = nota3;
                            piorIDF = id;
                        } else if (nota3 == piorNotaF3) {
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