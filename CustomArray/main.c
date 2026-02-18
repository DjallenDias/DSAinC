#include <stdio.h>
#include "customarr.h"

int main() {
    CustomArr *arr = create_array(5);
    arr->arr[0] = 10;
    printf("%d\n", arr->len);
    for(int i = 0; i < arr->len; i++){
        printf("%d\n", arr->arr[i]);
    }
    return 0;
}