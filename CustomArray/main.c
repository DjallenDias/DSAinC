#include <stdio.h>
#include "customarr.h"

int main() {
    CustomArr *arr = create_array(5);
    fill_array(arr);
    arr->arr[0] = 10;
    print_array(arr);
    return 0;
}