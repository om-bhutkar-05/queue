#include "header.hpp"

bool queue::isempty() {
    return (front == nullptr && rear == nullptr);
}

void queue::insert(int data) {
    node* newNode = new node(data);
    if (isempty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

int queue::remove() {
    if (isempty()) {
        return -1; 
    }
    int rem;
    if (front == rear) {
        rem = front->data;
        delete front;
        front = rear = nullptr;
    } else {
        rem = front->data;
        node* temp = front;
        front = front->next;
        delete temp;
    }
    return rem;
}
