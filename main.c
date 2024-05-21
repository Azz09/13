// main.c

#include <stdio.h>
#include "student.h"
#include "node.h"





int main() {
    struct Node* head = NULL;

    struct Student student1 = {"Pushkin", "Alex", 'M', 20, "Group 1", 4, 3, 5};
    struct Student student2 = {"Mushkina", "Olga", 'F', 19, "Group 2", 5, 5, 3};

    append(&head, &student1);
    append(&head, &student2);

    printf("Исходная информация о студентах:\n");
    print_list(head);

    printf("\nСнижение оценки по химии всем студентам на 1 балл...\n");

    struct Node* current = head;
    while (current != NULL) {
increase_chemistry_grade(&(current->data));
        current = current->next;
    }

    printf("\nОбновленная информация о студентах:\n");
    print_list(head);

    free_list(head);

    return 0;
}
