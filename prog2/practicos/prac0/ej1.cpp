#include <cstdio>

float PromClase (int vals[4]) {
    return (float) (vals[0] + vals[1] + vals[2]+ vals[3] + vals[4]) / 5;
};

int main () {
    int arr[4];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    };
    printf("%f \n", PromClase(arr));
}