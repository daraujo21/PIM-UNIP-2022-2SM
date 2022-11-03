#include<stdbool.h>

#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

#define ALFABETO_MIN "abcçdefghijklmnopqrstuvwxyz"
#define VOGAIS_ACENTUADAS_MIN "áàãâäéèẽêëíìĩîïóòõôöúùũûü"
#define CONSOANTES_ACENTUADAS_MIN "ḿńǹñǘǜṽćĉẍźẑśŝǵĝĥḧĵḱĺẃẁŵẅŕẗýỳỹŷÿṕ"

#define ALFABETO_MSC "ABCÇDEFGHIJKLMNOPQRSTUVWXYZ"
#define VOGAIS_ACENTUADAS_MSC "ÁÀÃÂÄÉÈẼÊËÍÌĨÎÏÓÒÕÔÖÚÙŨÛÜ"
#define CONSOANTES_ACENTUADAS_MSC "ḾŃǸÑǗǛṼĆĈẌŹẐŚŜǴĜĤḦĴḰĹẂẀŴẄŔT̈ÝỲỸŶŸṔ"

#define TODOS_CARACTERES_MIN ALFABETO_MIN VOGAIS_ACENTUADAS_MIN CONSOANTES_ACENTUADAS_MIN
#define TODOS_CARACTERES_MSC ALFABETO_MSC VOGAIS_ACENTUADAS_MSC CONSOANTES_ACENTUADAS_MSC

#define TODOS_CARACTERES TODOS_CARACTERES_MIN TODOS_CARACTERES_MSC

bool nome_valido(const char* p_texto);
bool caractere_letra_valida(const char p_caractere);
int posicao_caractere(const char* p_texto, const char p_caractere);
bool contem_caractere(const char* p_texto, const char p_caractere);

char* para_caixa_alta(const char* p_texto);
char* para_caixa_baixa(const char* p_texto);
char* mudar_caixa(const char* p_texto, const bool p_alta);

#endif // UTILS_H_INCLUDED
