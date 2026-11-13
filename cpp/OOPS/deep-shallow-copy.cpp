#include<iostream>
#include<string>
using namespace std;

class Car{
    public: 
    string name;
    string color;
    int *mileage;

    Car(string name, string color){
        this->name = name;
        this->color = color;
        mileage = new int;//Dynamic allocation
        *mileage = 12;
    }

    Car(Car &original){
        cout << " copying original to new..\n";
        name = original.name;
        color = original.color;
        //shallow copy
        // mileage = original.mileage; 

        //deep copy
        mileage = new int;
        *mileage = *original.mileage;
    }
};


int main(){

    Car c1("maruti","red");
    Car c2(c1);
    cout << c2.name<<endl;
    cout << c2.color<<endl;
    cout << *c2.mileage<<endl;
    
    *c2.mileage = 10;
    cout << *c1.mileage<<endl;//12
    cout << *c2.mileage<<endl;//10

    return 0;
}