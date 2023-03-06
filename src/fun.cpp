// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    int64_t total = 1;
    while (n > 0) {
        total = total * x;
        n--;
    }
    return total;
}
