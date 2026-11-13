#include<iostream>
using namespace std;

int getithBit(int num, int i){
    int bitmask = 1 << i;

    if (!(num & bitmask))
    {
       return 0;
    }else{
        return 1;
    }
    
}

int main(){
cout << getithBit(6,2) <<endl;
cout << getithBit(7,1) <<endl;
return 0;
}