#include "singlylist.h"

int main() {
    List *list = create_list();
    add_element(list, 10);
    add_element(list, 9);
    print_list(list);
    return 0;
}