#include"functions.cpp"

int main(){
    queue q1(10);
    for (int i = 0; i < 10; i++)
    {
        q1.insert(i+2);
    }
    for (int i = 0; i < 10; i++)
    {
        int a=q1.remove();
       cout<<a<< " ";
    }
}