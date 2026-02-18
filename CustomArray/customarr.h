#ifndef CUSTOMARR_H
#define CUSTOMARR_H

typedef struct  {
    int *arr;
    int len;
} CustomArr;

CustomArr *create_array(int len);
void print_array(CustomArr *carr);
void fill_array(CustomArr *carr);

#endif