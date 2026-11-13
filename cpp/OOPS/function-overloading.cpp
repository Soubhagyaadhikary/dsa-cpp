#include<iostream>
#include<string>
using namespace std;

class Print{
    public:
    void show(int x){
        cout << "int : "<< x<<endl;
    }
    void show(string str){
        cout<< "str: "<< str<<endl;
    }
};
int main(){
Print obj1;
obj1.show(4);
obj1.show("Hello");

return 0;
}