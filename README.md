# test-mpfr-gsl





```shell
mkdir build
cd build
cmake ..
make -j

# test
./mpfr_test
# Pi to 256-bit precision: 3.14159265358979323846264338327950288419716939937511
./gsl_test
# Result of A * B:
# 19 22
# 43 50
```

