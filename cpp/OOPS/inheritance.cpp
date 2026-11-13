#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
    string color;

    void eat(){
        cout<<"eat \n";
    }
    void breath(){
        cout<<"breath \n";
    }


};

// class Fish : public Animal{
//     public:
//     int fins;
//     void swim(){
//         cout<< "swim\n";
//     }
// };
class Fish : protected Animal{
    public:
    int fins;
    void swim(){
        cout<< "swim\n";
        eat();// under here is possible
    }
};

int main(){


    Fish f1;
    f1.fins = 3;
    cout<< f1.fins<<endl;
    f1.swim();
    // f1.eat();//error give not possible
}