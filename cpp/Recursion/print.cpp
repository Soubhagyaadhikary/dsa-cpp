#include<iostream>
using namespace std;

//print
void print(int n){
    if (n == 0)
    {
      return ;
    }
    
 cout << n<<" ";
 print(n-1);
}


int main(){
print(50);
return 0;
}