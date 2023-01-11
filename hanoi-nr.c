#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char origen, char destino, char auxiliar) {
    int i;
    for (i = n; i >= 1; i--) {
        hanoi(i-1, origen, auxiliar, destino);
        printf("Mover disco %d de %c a %c\n", i, origen, destino);
        hanoi(i-1, auxiliar, destino, origen);
    }
}

int main(int argc, char *argv[]) {
    int n = 3; // number of disks
    if (argc > 1) {
        n = atoi(argv[1]);
    }
    hanoi(n, 'A', 'C', 'B');
    return 0;
}
