#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"

void init_stack(struct Stack *stack) {
    stack->list = malloc(sizeof(struct LinkedList));
    if (stack->list == NULL) {
        perror("Not enough memory to initialize the stack!");
        return;
    }

    init_list(stack->list);
}

int get_size_stack(struct Stack *stack) {
    return stack->list->size;
}

int is_empty_stack(struct Stack *stack) {
    if (stack->list->size == 0){
        return 1;
    }
    return 0;
}

void* peek_stack(struct Stack *stack) {
    return stack->list->tail->data;
}

void pop_stack(struct Stack *stack) {
    struct Node *be_gone;
    be_gone = remove_nth_node(stack->list, 0x7fffffff);
    free(be_gone);
}

void push_stack(struct Stack *stack, void *new_data) {
    add_nth_node(stack->list, 0x7fffffff, new_data);
}

void clear_stack(struct Stack *stack) {
    while (stack->list->size > 0) {
        pop_stack(stack);
    }
}

void purge_stack(struct Stack *stack) {
    free_list(&stack->list);
}