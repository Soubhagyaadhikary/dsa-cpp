#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string str1, string str2){
    if (str1.length() != str2.length())
    {
      cout << "not valid anagrams\n";
        return false;
    }


    int count[26] = {0};
    for (int i = 0; i < str1.length(); i++)
    {
      //int idx = str1[i]-'a'
      count[str1[i]-'a']++;
    }

    for (int i = 0; i < str2.length(); i++)
    {
        // int idx = str2[i]-'a';
     if (count[str2[i]-'a']== 0)
     {
        cout << "not valid anagrams\n";
        return false;
     }
     count[str2[i]-'a']--;
    }
    
cout << "valid anagrams\n"<< endl;
return true;
    
}

int main(){
    string str1 = "dog";
    string str2 = "cat";
    isAnagram(str1, str2);
    return 0;
}