#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    cout<< "size : "<< vec.size()<<endl;
    cout<< "capacity : "<< vec.capacity()<<endl;

    vec.push_back(4);
    cout<< "size : "<< vec.size()<<endl;
    cout<< "capacity : "<< vec.capacity()<<endl;

    vec.pop_back();
    cout<< "size : "<< vec.size()<<endl;
    cout<< "capacity : "<< vec.capacity()<<endl;

    return 0;
}