#include <stdio.h>

void MoverTorre (int casas) {
    if (casas > 0) {
    printf("esquerda\n");
    MoverTorre (casas - 1); 
    } else if (casas < 0) {
        printf("direita\n");
        MoverTorre (casas + 1);
    }

}
void MoverCavalo (int Cavalo){
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
            if (i == 0) {
                printf("cima\n");
            } else if (i == 1 && j == 0){
                printf("direita\n");
            }
        }
    }
    
}
void MoverBispo(int Bispo) {
    int x, y;
    for (x = 0; x < Bispo; x++) {
        printf("cima\n");
        for (y = 0; y < 1; y++) {
            printf("direita\n");
        break;
        }
    }
}
void MoverRainha(int Rainha) {
    if (Rainha < 0) {
        printf("esquerda\n");
        MoverRainha (Rainha + 1);
    } else if (Rainha > 0) {
        printf("direita\n");
        MoverRainha (Rainha -1);
    }
}

    


int main() {

    printf (" movimentação do cavalo \n");
    MoverCavalo(0);

    printf ("movimentação da torre \n");
    MoverTorre(5);

    printf ("movimentação bispo \n");
    MoverBispo(5);

    printf("movimentação da rainha\n");
    MoverRainha(-5);

    return 0;
}
