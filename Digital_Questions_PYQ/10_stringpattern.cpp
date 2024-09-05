//Problem Description
// Given a string S(input consisting)of '*' and '#'.The length of the string
// is variable. The task is to find the minimum number of '*' or '#' to make
// it a valid string. The string is considered valid if the number of '*' 
// and '#' are equal. The '*' and '#' can be any position in the string.

// Note:The output will be positive or negative integer based on number
// of '*' and '#' in the input string.

// (* > #): positive integer
// (# > *): negative integer
// (# = *): 0

// Input 
// ###*** -> Value of S

//output
// O -> number of * and # are equal

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    int a=0, b = 0;
    getline(cin, s);
    for(auto i:s)
    if(i=='#') b++;
    else if(i=='*')a++;
    cout<<a-b;
}