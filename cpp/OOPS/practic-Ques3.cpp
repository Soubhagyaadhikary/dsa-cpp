#include<iostream>
#include<string>
using namespace std;


class Person{
    protected: 
    string Name;
    int age;
    public:
    Person(string n, int a){
        Name = n;
        age = a;
    }
};
class Student : public Person{
    private:
    string studentID;
    public:
    Student(string n, int a, string id) : Person(n,a){
        studentID = id;
    }

    void displayStudentInfo(){
        cout<<"Name : "<< this->Name<<endl;
        cout<<"age : "<< this->age<<endl;
        cout<<"StudentId : "<< this->studentID<<endl;
    }
};

int main(){

Student student("Alice",20,"S12345");
student.displayStudentInfo();
    
return 0;
}