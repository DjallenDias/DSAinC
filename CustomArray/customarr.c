#include <stdlib.h>
#include "customarr.h"

CustomArr *create_array(int len) {
    CustomArr *carr = (CustomArr*) malloc(sizeof(CustomArr));
    int *aux_arr = (int*) malloc(sizeof(int)*len);
    carr->arr = aux_arr;
    carr->len = len;
    return carr;
}