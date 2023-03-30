//
// Created by DELL on 3/9/2023.
//
#include <stdio.h> //standard input output
#include <stdlib.h> //standard library

void func2(int *ptr1){
    int *ptr2;
    printf("%i %i\n", *ptr1, *ptr2);
    ptr1 = malloc(sizeof(int));
    ptr2 = malloc(sizeof(int));
    printf("%i %i\n", *ptr1, *ptr2);
}

void test2(){
    int *ptr1;
    printf("%i\n", *ptr1);
    func2(ptr1);
    printf("%i\n", *ptr1);
    free(ptr1);
    printf("%i\n", *ptr1);
}

int main(int argc, char *argv[]){
    test2();
}