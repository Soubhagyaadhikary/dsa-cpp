#include<iostream>
using namespace std;

int setithbit(int num, int i){
    int bitmask = 1<<i;
    return (num | bitmask);
}

int clearIthBit(int num, int i){
    int bitmask = ~(1<<i);
    return (num & bitmask);
}

bool isPowerof2(int num){
    if (!(num & (num-1)))
    {
     return true;
    }else{
      return false;
    }
    
}
int main(){
 cout << isPowerof2(6)<< endl;
 cout << isPowerof2(8)<< endl;
 cout << isPowerof2(13)<< endl;
 cout << isPowerof2(7)<< endl;
 return 0;
}