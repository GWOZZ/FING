#include <cstdio>

int ocurrencias (int largo, char frase[100], char letra) {
    int contador = 0;
    for (int i = 0; i < largo; i++) {
        if (frase[i] == letra) contador ++;
    };
    return contador;
}