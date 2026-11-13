#include<iostream>
using namespace std;

void fastexpo(int x,int n){
    int ans =1;

    while (n>0)
    {
     int lastBit = n&1;
     if (lastBit)
     {
       ans = ans * x;
     }
     
     x = x * x;
     n = n >> 1;
    }
    cout << ans << endl;
}


int main(){
fastexpo(3,4);
fastexpo(3,5);
}