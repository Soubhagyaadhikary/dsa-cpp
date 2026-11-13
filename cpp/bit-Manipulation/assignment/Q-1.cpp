#include<iostream>
using namespace std;

void Rangeclear(int num, int i, int j){

    //tc : O(n)
//     for (int k = i; k <= j; k++)
//     {
//        int mask = ~(1<<k);
//        num = (num & mask);
//     }
//    cout << num <<endl;


//tc : o(1)

int leftmask = (~0)<< (j+1);
int rightmask = (1<<i) - 1;
int mask = leftmask | rightmask;
num = num & mask;


cout << num <<endl;

}

int main(){
 Rangeclear(15,1,3);
 return 0;
}