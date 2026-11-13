#include<iostream>
#include<string>
using namespace std;

int tilingProblme(int n){ // 2xn
if (n == 0 || n == 1)
{
    return 1;
}

//detail process

// //vertical
// int ans1 = tilingProblme(n-1);// 2xn-1

// //horizontal
// int ans2 = tilingProblme(n-2); // 2xn-2

// return ans1 + ans2;


// in short
return tilingProblme(n-1) + tilingProblme(n-2);

}


int main(){

int n = 5;
cout<< tilingProblme(n)<<endl;

   return 0; 
}