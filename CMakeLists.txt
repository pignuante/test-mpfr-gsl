cmake_minimum_required(VERSION 3.10)

# 프로젝트 이름과 버전
project(MathLibrariesTest VERSION 1.0)

# C++ 표준 설정
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# MPFR과 GSL 라이브러리 찾기
find_package(MPFR REQUIRED)
find_package(GSL REQUIRED)

# 소스 파일 설정
add_executable(mpfr_test src/mpfr_test.cpp)
add_executable(gsl_test src/gsl_test.cpp)

# MPFR 라이브러리 링크
target_link_libraries(mpfr_test MPFR::MPFR)

# GSL 라이브러리 링크
target_link_libraries(gsl_test GSL::gsl GSL::gslcblas)
