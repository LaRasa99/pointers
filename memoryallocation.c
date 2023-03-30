//
// Created by DELL on 3/8/2023.
//
#include <stdio.h> //standard input output
#include <stdlib.h> //standard library

int main(int argc, char *argv[]) {
    // argc --> argument counter which tells u how many command line arguments are there
    // * for pointer and *argv[] --> pointer to string of characters
    // i and j store data
    int i = 1; //allocated from initialized data segment
    int j;//will be allocated from uninitialized data segment
    //ptr will store the address to a memory location
    int *ptr;//allocated from heap segment
    ptr = malloc(sizeof(int));// allocate memory --> giving the size of the data type
    printf("%i %i %i\n", i, j, *ptr);//dereferancing the getting the content of the location
    i = 2;
    *ptr = 3; // pointer is a reference
    printf("%i %i %i\n", i, j, *ptr);
    j = 4;
    free(ptr);//deallocate memory
    printf("%i %i %i\n", i, j, *ptr);
    return 0;
}

/*void func2(int *ptr1){
    int *ptr2;
    printf("%i %i\n", *ptr1, *ptr2);
    ptr1 = malloc(sizeof(int));
    ptr2 = malloc(sizeof(int));
    printf("%i %i\n", *ptr1, *ptr2);
}*/

/*
void test2(){
    int *ptr1;
    printf("%i\n", *ptr1);
    func2(ptr1);
    printf("%i\n", *ptr1);
    free(ptr1);
    printf("%i\n", *ptr1);
}
*/

/*void func3(int **ptr1){
    int *ptr2;
    printf("%i %i\n", **ptr1, *ptr2);
    (*ptr1) = malloc(sizeof(int));
    printf("%i %i\n", **ptr1, *ptr2);
}*/

/*
void test3(){
    int *ptr1;
    printf("%i\n", *ptr1);
    func3(&ptr1);
    printf("%i\n", *ptr1);
    free(ptr1);
    printf("%i\n", *ptr1);
}*/
