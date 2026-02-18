#ifndef SINGLYLIST_H
#define SINGLYLIST_H

typedef struct Element Element;

typedef struct List {
    Element *head;
    int len;
    Element *tail;
} List;

List *create_list();
void add_element(List *list, int num);
void print_list(List *list);

#endif