#include<iostream>
using namespace std;
int main(){
// matrix print
    // int n = 5;
    // //outer loop
    // for (int i = 1; i <= n; i++)
    // {
    //     //inner loop
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }


// patern print
                // *
                // **
                // ***
                // ****

    // int n = 4;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*"<< " ";
    //     }
    //     cout << endl;
        
    // }

 // patern print
                // ****
                // ***
                // **
                // *   
    // int n = 6;
    // for (int i = 1; i <= n; i++)    {
        
    //     for (int j = 1; j <= n-i+1; j++)
    //     {
    //        cout << "* ";
    //     }
    //     cout << endl;
    // }
    
// Half pyramid

    // int n = 4;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    
// }

// character pyramid

    // int n = 4;
    // char ch = 'A';
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << ch;
    //         ch++;
    //     }
    //     cout << endl;
    // }

// Hollow rectangle pattern

    // int n = 6;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "*";//first
    //     for (int j = 1; j <= n-1; j++)
    //     {
    //         if (i == 1 || i ==n)
    //         {
    //             cout << "*";
    //         }else{
    //             cout << " ";
    //         }
            
    //     }
    //     cout << "*"<< endl;//last


    // }
    
// Inverted and rotated halif pyrmid
    // int n = 6;
    // for (int i = 1; i <= n; i++)
    // {
    //     //spaces
    //     for (int j = 1; j <= n-i; j++)
    //     {
    //         cout << " ";
    //     }
        
    //     //stars
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

//Floyd's Triangle Pattern

    // int n = 5;
    // int num = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << num <<" ";
    //         num++;
    //     }
    //     cout << endl;
    // }

//Diamond Pattern
    // int n = 4;
    // //1st pyramid
    // for (int i = 1; i <= n; i++)
    // {
    //     //spaces
    //     for (int j = 1; j <= n-i; j++)
    //     {
    //        cout << " ";
    //     }
    //     //stars
    //     for (int j = 1; j <= 2*i-1; j++)
    //     {
    //        cout << "*";
    //     }
    //     cout << endl;
        
    // }
    //   //2nd pyramid
    // for (int i = n; i >= 1; i--)
    // {
    //     //spaces
    //     for (int j = 1; j <= n-i; j++)
    //     {
    //         cout << " ";
    //     }
    //     //star
    //     for (int j = 1; j <= 2*i-1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
        
    // }

// Butterfly Pattern
    int n = 4;
    for (int i = 0; i <= n; i++)
    {
        // upper half
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2*(n-i); j++)
        {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    
    // lower half
    for (int i = n; i >= 1; i--)
    {
        // lower half
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2*(n-i); j++)
        {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }



 
    return 0;
}