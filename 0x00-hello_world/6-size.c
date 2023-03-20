#!/bin/bash
#include <stdio.h>
/**
*  main is entry points
* 
* return 0 is a success 
*/

int main() 
{
    printf("The size of int is %d byte(s)\n", sizeof(int));
    printf("The size of short is %d byte(s)\n", sizeof(short));
    printf("The size of long int is %d byte(s)\n", sizeof(long 
int));
    printf("The size of float is %d byte(s)\n", sizeof(float));
    printf("The size of char is %d byte(s)\n", sizeof(char));
    printf("The size of long long int is %d byte(s)\n", sizeof(
long long int));
    return 0;
}
