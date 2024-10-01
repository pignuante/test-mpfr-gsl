//
// Created by hanyul Ryu on 10/2/24.
//

#include <iostream>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_blas.h>

int main() {
    // 2x2 행렬 A와 B 선언
    gsl_matrix *A = gsl_matrix_alloc(2, 2);
    gsl_matrix *B = gsl_matrix_alloc(2, 2);
    gsl_matrix *C = gsl_matrix_alloc(2, 2);

    // A와 B 행렬에 값 할당
    gsl_matrix_set(A, 0, 0, 1.0);
    gsl_matrix_set(A, 0, 1, 2.0);
    gsl_matrix_set(A, 1, 0, 3.0);
    gsl_matrix_set(A, 1, 1, 4.0);

    gsl_matrix_set(B, 0, 0, 5.0);
    gsl_matrix_set(B, 0, 1, 6.0);
    gsl_matrix_set(B, 1, 0, 7.0);
    gsl_matrix_set(B, 1, 1, 8.0);

    // C = A * B 수행
    gsl_blas_dgemm(CblasNoTrans, CblasNoTrans, 1.0, A, B, 0.0, C);

    // C 행렬 출력
    std::cout << "Result of A * B:\n";
    for (size_t i = 0; i < 2; ++i) {
        for (size_t j = 0; j < 2; ++j) {
            std::cout << gsl_matrix_get(C, i, j) << " ";
        }
        std::cout << "\n";
    }

    // 메모리 해제
    gsl_matrix_free(A);
    gsl_matrix_free(B);
    gsl_matrix_free(C);

    return 0;
}