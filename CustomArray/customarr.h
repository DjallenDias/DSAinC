#ifndef CUSTOMARR_H
#define CUSTOMARR_H

typedef struct  {
    int *arr;
    int len;
} CustomArr;

CustomArr *create_array(int len);

#endif