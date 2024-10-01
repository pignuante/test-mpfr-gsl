//
// Created by hanyul Ryu on 10/2/24.
//
#include <iostream>
#include <mpfr.h>

int main() {
    // MPFR 변수 선언
    mpfr_t pi;
    mpfr_init2(pi, 256); // 256비트 정밀도

    // π 값을 설정
    mpfr_const_pi(pi, MPFR_RNDN);

    // π 값을 출력 (기본적으로 10진수로 출력)
    std::cout << "Pi to 256-bit precision: ";
    mpfr_printf("%.50Rf\n", pi); // 50자리 소수 출력

    // 변수 메모리 해제
    mpfr_clear(pi);
    return 0;
}