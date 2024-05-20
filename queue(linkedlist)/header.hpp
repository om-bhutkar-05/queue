#include<iostream>
using namespace std;

struct node {
    int data;
    struct node * next;
    node(int data):data(data),next(NULL){}
};

class queue{
private:
struct node * front=NULL;
struct node * rear=NULL;
public:
void insert(int data);
int remove();
bool isempty();
};