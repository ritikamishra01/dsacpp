#include <bits/stdc++.h> 
#include<string.h>
using namespace std; 
const int MAX_CHAR = 26; 
  
// function to check if we can spilt 
// string or not 
bool checkCorrectOrNot(string s) 
{ 
    // Counter array inisialized with 0 
    int count1[MAX_CHAR] = {0}; 
    int count2[MAX_CHAR] = {0}; 
  
    // Length of the string 
    int n = s.length(); 
    if (n == 1) 
        return true; 
  
    // traverse till the middle element 
    // is reached 
    for (int i=0,j=n-1; i<j; i++,j--) 
    { 
        // First half 
        count1[s[i]-'a']++; 
  
        // Second half 
        count2[s[j]-'a']++; 
    } 
  
    // Checking if values are different 
    // set flag to 1 
    for (int i = 0; i<MAX_CHAR; i++) 
        if (count1[i] != count2[i]) 
            return false; 
  
    return true; 
} 
  
// Driver program to test above function 
int main() 
{ 
    // String to be checked 
    int T;
    cin>>T;
    string s;
    for(int i=0;i<T;i++)
    { 
        cin>>s; 
    if (checkCorrectOrNot(s)) 
        cout << "Yes\n"; 
    else
        cout << "No\n"; 
    }
    return 0; 
}