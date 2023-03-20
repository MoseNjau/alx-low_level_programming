#!/bin/bash
#include <stdio.h>

int main() {
    printf("The size of int is %1d\n", sizeof(int));
    printf("The size of short is %ld\n", sizeof(short));
    printf("The size of long is %ld\n", sizeof(long));
    printf("The size of long double is %1d\n", sizeof(long double));
    printf("The size of char is %ld\n", sizeof(char));
    printf("The size of void pointer is %ld\n", sizeof(void *));
    printf("The size of long long is %ld\n", sizeof(long long));
    printf("The size of float is %ld\n", sizeof(float));
    printf("The size of double is %ld\n", sizeof(double));
    return 0;
}
