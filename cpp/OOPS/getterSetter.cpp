#include<iostream>
#include<string>
using namespace std;

class Student{
string name;
float cgpa;

public:
    void getpercentage(){
        cout << (cgpa*10)<<" % \n";

    }

// Setter
    void setName(string nameVal){
        name = nameVal;
    }

    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;
    }

//Getter
 string getName(){
    return name;
 }

 float getCgpa(){
    return cgpa;
 }

};


int main(){
Student s1; //object

s1.setName("harry");
s1.setCgpa(9.2);

cout << s1.getName()<<endl;
cout << s1.getCgpa()<<endl;
return 0;

}
