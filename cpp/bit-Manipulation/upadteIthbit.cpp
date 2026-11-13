#include<iostream>
using namespace std;
void updateIth(int num, int i, int val){
    num = num & ~(1<<i); //clear the value
    num = num | (val<<i);

    cout << num <<endl;
}

int main(){

    updateIth(7,2,0);
    updateIth(7,3,1);
}