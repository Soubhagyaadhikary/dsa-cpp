#include<iostream>
using namespace std;
void clearIthbit(int num, int i){
    int bitmask = (~0)<<i;
    num = num & bitmask;

    cout << num <<endl;
}

int main(){
clearIthbit(15,2);//12
return 0;
}