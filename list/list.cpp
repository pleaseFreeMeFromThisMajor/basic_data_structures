#include "list.h"
#include <iostream>

void print(List* list) {
    Node* node = list ->head;

    while (node) {
        std::cout << node ->val << " -> ";
        node = node ->next;
    }
    std::cout << "nullptr\n";
}

void print_reverse_imp(Node* node) {
    if (!node) {
        return;
    }
    print_reverse_imp(node ->next);
    std::cout << node ->val << " ";
}
void print_reverse(List* list) {
    if (!list || !list ->head) {
        std::cout << "empty\n";
        return;
    }
    print_reverse_imp(list ->head);
    std::cout << '\n';
}

void append(List* list, int value) {
    Node* node = new Node(value);
    if (!list ->head) {
        list ->head = list ->tail = node;
        return;
    }
    list ->tail ->next = node;
    list ->tail = node;
}

void push_front(List* list, int value) {
    Node* node = new Node(value);
    if (!list ->head) {
        list ->head = list ->tail = node;
        return;
    }
    list ->head ->next = node;
    list ->head = node;
}

void pop_back(List* list) {
    if (!list || !list ->head) {
        return;
    }
    if (list ->head == list ->tail) {
        delete list ->head;
        list ->head = list ->tail = nullptr;
        return;
    }
    Node* newTail = list ->head;
    while (newTail && newTail ->next) {
        if (newTail ->next == list ->tail) {
            break;
        }
        newTail = newTail ->next;
    }
    delete list ->tail;
    list ->tail = newTail;
    newTail ->next = nullptr;
}

void pop_front(List* list) {
    if (!list || !list ->head) {
        return;
    }
    if (list ->head == list ->tail) {
        delete list ->head;
        list ->head = list ->tail = nullptr;
        return;
    }
    Node* del = list ->head;
    list ->head = del ->next;
    delete del;
    del = nullptr;
}

void free(List* list) {
    if (!list || !list ->head) {
        list ->tail = nullptr;
        return;
    }
    Node* node = list ->head;
    while (node) {
        Node* del = node;
        node = node ->next;
        delete del;
        del = nullptr;
    }
    list ->head = list ->tail = nullptr;
    delete list;
    list = nullptr;
}