#include<iostream>
#include<string>
using namespace std;


//singleInheritance
// class Animal{
//     public:
//     string color;

//     void eat(){
//         cout<<"eat \n";
//     }
//     void breath(){
//         cout<<"breath \n";
//     }


// };
// class Fish : public Animal{
    //     public:
    //     int fins;
    //     void swim(){
        //         cout<< "swim\n";
        //     }
        // };


        
        //multi-level inheritance
//         class Animal{
//             public:
//             string color;
        
//             void eat(){
//                 cout<<"eat \n";
//             }
//             void breath(){
//                 cout<<"breath \n";
//             }
        
        
//         };
//     class Mammal : public Animal{
//     public:
//     string bloodtype;
//     Mammal(){
//         bloodtype = "warm";
//     }
// };


// class dog : public Mammal{
//     public:
//    void tailwag(){
//     cout<<"tailwag\n";
//    }
// };



//Multiple inheritance

class Teacher{
    public: 
    int salary;
    string subject;
};
class student{
    public: 
    int roll;
    int cgpa;
};
class TA : public Teacher, public student{
    public: 
    string name;
};


int main(){


//single
    // cout<< f1.fins<<endl;
    // f1.swim();
    // f1.eat();
    // f1.breath();

//multi-level

    // dog d1;
    // d1.eat();
    // d1.breath();
    // d1.tailwag();
    // cout << d1.bloodtype<<endl;

// multiple inheritance

TA t1;
t1.name = "rohit";
t1.subject = "math";
t1.cgpa = 9.1;

cout << t1.name<< endl;
cout << t1.subject<< endl;
cout << t1.cgpa<< endl;

return 0;
}