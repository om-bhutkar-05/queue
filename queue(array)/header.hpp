#include<iostream>
using namespace std;



class queue
{
private:
   int * arr;
   int front;
   int rear;
   int size;
public:
    queue(int size);
    
    void insert(int data);
    int remove();
    bool isfull();
    bool isempty();
};

