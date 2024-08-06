#include <cstdio>
#include <cmath>

bool esPrimo (int a) {
    if (a <= 1) return false;
    else if (a == 2 || a == 3) return true;
    else if (a % 2 == 0) return false;
    else {
        int i = 3;
        while (i <= sqrt(a) && a % i != 0) {
            i += 2;
        };
        return (a % i != 0);
    };
};

int main () {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a < 2) a = 2;
    while (a <= b) {
        if (esPrimo(a)) {
            printf("%d ", a);
        };
        a += 1 + a % 2;
    };
    printf("\n");
}