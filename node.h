// node.h

#ifndef NODE_H
#define NODE_H

#include "student.h"

struct Node {
    struct Student data;
    struct Node* next;
};

void append(struct Node** head_ref, struct Student* student);
void print_list(struct Node* head);
void free_list(struct Node* head);

#endif /* NODE_H */
