#include<iostream>
using namespace std;
int main(){

    // factorial number
// int n = 2;
// int fact = 1;
// for (int i = 1; i <= n; i++)
// {
//     fact = fact*i;
// }
// cout << "fact is "<< fact << endl;

    // Multiplication table of n
// int n = 8;
// for (int i = 1; i <= n; i++)
// {
//     cout << n*i << endl;
// }

    //check armstorng number
// int n = 371;
// int num = n;
// int cubeSum = 0;
// while (num > 0)
// {
//     int lastDig = num % 10;
//     cubeSum += lastDig * lastDig * lastDig;
//     num /= 10;
// }
// if (n == cubeSum)
// {
//     cout << "its armstrong number" << endl;
// }else{
//     cout << "its not armstrong number" << endl;
// }

    //N Fibbonachi Series
int n = 3;
int first = 0, sec = 1;
cout << first << " " << sec <<" ";

for (int i = 2; i < n; i++)
{
    int third = first + sec;
    cout << third << " ";
    first = sec;
    sec = third;
}
cout << "\n";




    return 0;
}