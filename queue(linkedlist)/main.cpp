#include"functions.cpp"

int main(){
    queue q1;
q1.insert(15);
q1.insert(16);
q1.insert(15);
q1.insert(132);
q1.insert(123);
for(int i=0;i<5;i++){
    cout<<q1.remove()<<" ";
}
}