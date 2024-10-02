// QUESTION NO : 51
// Given a string S and a character C, write a program to count the number of
// sub-strings of S that contains only the character C.
// Input:
// First line contains the string S
// Second line contains the character C.
// Output:
// Single Integer denoting the no.of sub-string containing only the given character C.
// Examples:
// Input:
// 0110111
// 1
// Output:
// 9

// Explanation:
// The sub-strings containing only ‘1’ are:
// “1” — 5 times
// “11” — 3 times
// “111” — 1 time
// Hence, the count is 9.

#include<bits/stdc++.h>
using namespace std;

void countSubString(string S, char C)
{
    int count = 0;//variable to store the total number of substrings
    int conCount = 0;//variable to store consective occurences of the character C
    for(int i = 0; S[i] != '\0';i++)
    {
        char ch = S[i];//Current character in the string S
        if(ch==C)
           conCount++;// if the current character is C, increment the consective  count
        else
        {
            count += (conCount * (conCount + 1)) / 2;
            conCount = 0;//reset the count of consective C's
        }
    }
    count += (conCount * (conCount + 1))/2;
    cout<<count;
}

int main()
{
    string S;
    char C;
    getline(cin,S);
    cin>>C;
    countSubString(S,C);
    return 0;
}
