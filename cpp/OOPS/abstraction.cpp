#include<iostream>
#include<string>
using namespace std;

//abstract class
class Shape{
    public: 
    virtual void draw() = 0;// abstract func, pure virtual function
};
class Circle : public Shape{
public:
 void draw(){
    cout << "draw circle\n";
 }

};
class Square : public Shape{
public:
 void draw(){
    cout << "draw square\n";
 }

};
int main(){
Circle cir1;
cir1.draw();

Square sqr1;
sqr1.draw();

return 0;

}