#include<iostream>
#include<string>
using namespace std;

class car{
    string name;
    string color;

public:
car(){
    cout <<"constructor without parameter\n";
}
car(string name, string color){
    cout <<"constructor is called...obj beign created\n";
    this->name = name;
    this->color = color;
}

void start(){
    cout << "car has started\n";
}
void stop(){
    cout << "car has stop\n";
}
};


int main(){
car c1;
c1.start();
c1.stop();
car c2("fortuner","black");
}