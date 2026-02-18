#include <stdlib.h>
#include <stdio.h>
#include "customarr.h"

CustomArr *create_array(int len) {
    CustomArr *carr = (CustomArr*) malloc(sizeof(CustomArr));
    int *aux_arr = (int*) malloc(sizeof(int)*len);
    carr->arr = aux_arr;
    carr->len = len;
    return carr;
}

void fill_array(CustomArr *carr) {
    int input = 0;
    for(int i=0; i < carr->len; i++){
        scanf("%d", &input);
        carr->arr[i] = input;
    }
}

void print_array(CustomArr *carr) {
    for(int i=0; i < carr->len; i++){
        printf("%d\n", carr->arr[i]);
    }
}