#include <stdio.h>
#include <stdlib.h>

int main()
{
    char valor[100];
    printf("Digite um nome\n");
    scanf("%[^\n]*c",&valor);
    printf("%d\n", strlen(&valor));
    // Copia os dados da variável entrada para a variável valor

    printf("%s: Nome %s\n", valor, nome_valido(valor) ? "válido" : "inválido");
    return 0;
}
