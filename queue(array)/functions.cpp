#include"header.hpp"

queue::queue(int size)
{
     arr=new int[100];
    front=0;
    rear=0;
}
bool queue::isempty(){
    if(rear==front ){
      return true;
    }
    return false;
}
bool queue::isfull(){
    if(rear==size-1){
      return true;
    }
    return false;
}
void queue::insert(int data){
    if(!isfull())
arr[rear++]=data;
}
int queue::remove(){
    if(!isempty()){
        int rem=arr[front++];
        return rem;
    }
}
