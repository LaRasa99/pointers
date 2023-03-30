//
// Created by DELL on 3/10/2023.
//
#include <stdio.h> //standard input output
#include <stdlib.h> //standard library

void func3(int **ptr1){
    int *ptr2;
    printf("%i %i\n", **ptr1, *ptr2);
    (*ptr1) = malloc(sizeof(int));
    printf("%i %i\n", **ptr1, *ptr2);
}

void test3(){
    int *ptr1;
    printf("%i\n", &*ptr1);
    func3(&ptr1);
    printf("%i\n", &*ptr1);
    free(ptr1);
    printf("%i\n", &*ptr1);
}

int main(){
    int a =3;
    func3(a);
    test3();
}