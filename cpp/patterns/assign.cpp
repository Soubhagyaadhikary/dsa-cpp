#include <iostream>
using namespace std;
int main(){
bool val = true;
int n = 5;
// for (int i = 0; i < n; i++)
// {
//   for (int j = 0; j <= i; j++)
//   {
//     cout << val << " " ;
//     val = !val;
//   }
//   cout << endl;
// }
for (int i = 1; i <= n; i++)
{
  if (i % 2 != 0)
  {
    for (int j = 1; j <= i; j++)
    {
      val = false;
      val = !val;
      val++;
    }
    
  } else{
    for (int j = 1; j <= i; j++)
    {
      val = true;
      val = !val;
      val++;
    }
    
  }
  
}




  return 0;
}