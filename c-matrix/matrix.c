#include <stdio.h>

void matmul(int p, int q, int r, double A[p][q], double B[q][r], double C[p][r]) {
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            for (int k = 0; k < q; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void print_matrix(int rows, int cols, double matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int x = 2, y = 3, z = 2;
    double A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    double B[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    double C[2][2];

    matmul(x, y, z, A, B, C);

    printf("Result from Matrix multiplication:\n");
    print_matrix(x, z, C);

    return 0;
}
