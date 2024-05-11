#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

struct Lista* criar() {
	struct Lista* nova_lista = (struct Lista*) malloc(sizeof(struct Lista*));
    if (nova_lista != NULL) {
        nova_lista->inicio = NULL;
        nova_lista->tamanho = 0;
    }
    return nova_lista;
}
