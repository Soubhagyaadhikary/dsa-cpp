#include<iostream>
using namespace std;
int main(){
    // char ch = 'F';
    // int pos = ch - 'A';
    // cout << pos <<endl;

    // char work[5] = "code"; // have a null char(\0) in last


// Input char array
char sentence[50];
cin.getline(sentence,50,'.');
// it add after space elements, not add after '.' this
cout<<"intput is : " << sentence << endl;
}