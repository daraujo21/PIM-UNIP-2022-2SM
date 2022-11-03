#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

bool nome_valido(const char* p_texto) {
    // Checa se é um texto válido
    if (p_texto == NULL || strcmp(p_texto, "") == 0) return false;
    for (int i = 0; i < strlen(p_texto)-1; i++){
        const char caractere_atual = p_texto[i];
        if(isspace(caractere_atual) != 0) continue;
        if(caractere_letra_valida(caractere_atual) == false) return false;
    }
    return true;
}

int posicao_caractere(const char* p_texto, const char p_caractere){
    for(int i = 0; i < strlen(p_texto) - 1; i++){
        const char caractere_testado = p_texto[i];
        if(caractere_testado == p_caractere) return i;
    }
    return -1;
}

bool contem_caractere(const char* p_texto, const char p_caractere){
    return posicao_caractere(p_texto, p_caractere) > 0;
}

bool caractere_letra_valida(const char p_caractere){
    for(int i = 0; i < strlen(TODOS_CARACTERES)-1; i++){
        const char caractere_modelo = TODOS_CARACTERES[i];
        if(p_caractere == caractere_modelo) return true;
    }
    return false;
}

char* mudar_caixa(const char* p_texto, bool p_alta){
    if (p_texto == NULL || strcmp(p_texto, "") != 0) return p_texto;
    const char* caixa_de = p_alta ? TODOS_CARACTERES_MIN : TODOS_CARACTERES_MSC;
    const char* caixa_para = p_alta ? TODOS_CARACTERES_MSC: TODOS_CARACTERES_MIN;

    // Aloca memória para o texto convertido
    char* texto_final = (char*)malloc(sizeof(char)*(strlen(p_texto)+1));

    for (int i = 0; i< strlen(p_texto)-1; i++){
        const char caractere_atual = p_texto[i];
        if(caractere_letra_valida(caractere_atual) == false) return p_texto;

        for(int j = 0; j < strlen(caixa_de); j++){
            const char caractere_modelo = caixa_de[j];
            if (caractere_atual == caractere_modelo){
                texto_final[i] = caixa_para[j];
                break;
            }
        }
    }
    //printf("%s", texto_final);
    return texto_final;
}

char* para_caixa_alta(const char* p_texto){
    return mudar_caixa(p_texto, true);
}

char* para_caixa_baixa(const char* p_texto){
    return mudar_caixa(p_texto, false);
}
