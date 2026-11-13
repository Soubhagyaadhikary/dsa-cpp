#include<iostream>
#include<string>
using namespace std;


// void counter(){
//     int count = 0;
//     count++;
//     cout<<"count: "<< count << endl;
// }
void counter(){
    static int count = 0;
    count++;
    cout<<"count: "<< count << endl;
}


// class Example{
//     public :
//     static int x;
// };

// int Example::x = 0;


//static object...

class Example{
    public:
    Example(){
        cout<<"constructor..\n";
    }

    ~Example(){
        cout<< "Destructor..\n";
    }
};
int main(){
// counter();
// counter();


// Example eg1;
// Example eg2;
// Example eg3;

// cout << eg1.x++ << endl;
// cout << eg1.x++ << endl;
// cout << eg1.x++ << endl;


int a = 0;
if (a == 0)     
{
   static Example eg1;
}

cout << "code is ending..\n";


return 0;
}
