#include<iostream>
#include<cstring>
using namespace std;

void checkLowerVowel(char word[], int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
     char ch = word[i];
     if (ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' )
     {
        count++;
     }
    }
    cout <<"no of lowercase vowel is  :" << count<<endl;
}
int main() {
char word[] ="AppeLE";
checkLowerVowel(word,strlen(word));
return 0;
}