#include<iostream>
#include<string>
using namespace std;


class Student{

    public:
    string name;
float cgpa;
void getpercentage(){
    cout << (cgpa*10)<<" % \n";

}
};

// class user{
//     int id;
//     string username;
//     string password;
//     string bio;

//     void deactivate(){
//         cout<<"deleting account\n";
//     }

//     void editBio(string newBio){
//         bio = newBio;
//     }
// };

int main(){
Student s1; //object

s1.name = "Harry";
s1.cgpa =9.0;
cout << s1.name<<endl;
cout << s1.cgpa<<endl;
s1.getpercentage();

return 0;

}