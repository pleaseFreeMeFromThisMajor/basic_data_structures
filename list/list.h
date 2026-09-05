#ifndef LIST_H
#define LIST_H

struct Node {
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = nullptr;
    }
};

struct List {
    Node* head;
    Node* tail;
    List() {
        head = tail = nullptr;
    }
};

void print(List* list);
void print_reverse_imp(Node* node);
void print_reverse(List* list);

void append(List* list, int value);
void push_front(List* list, int value);
void pop_back(List* list);
void pop_front(List* list);




#endif