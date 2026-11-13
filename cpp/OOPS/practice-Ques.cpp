#include<iostream>
#include<string>
using namespace std;

class Base{
    public:
    virtual void print(){
        cout << "base"<<endl;
    }
};
class Derived : public Base{
    public:
    void print() override{
        cout << "Derived"<<endl;
    }
};


int main(){

Base* b = new Derived();
b->print();
delete b;


    
return 0;
}