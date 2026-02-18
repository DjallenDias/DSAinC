#include <stdlib.h>
#include <stdio.h>

#include "singlylist.h"

typedef struct Element {
    int data;
    Element *next;
} Element;

typedef struct List {
    Element *head;
    int len;
    Element *tail;
} List;

List *create_list() {
    List *list = (List*) malloc(sizeof(List));
    list->head = NULL;
    list->tail = NULL;
    list->len = 0;
}

void add_element(List *list, int num) {
    Element *ele = (Element*) malloc(sizeof(Element));
    ele->data = num;
    ele->next = NULL;

    if(list->len == 0) {
        list->head = ele;
        list->tail = ele;
    } else {
        list->tail->next = ele;
        list->tail = ele;
    }
    
    list->len += 1;
}

void print_list(List *list) {
    Element *ele = list->head;
    for(int i=0; i < list->len; i++){
        printf("%d\n", ele->data);
        ele = ele->next;
    }
}