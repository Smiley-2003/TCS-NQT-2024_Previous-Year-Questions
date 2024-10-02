// Question 42
// QUESTION NO : 42
// Given a string Str, which contains numbers (0 to 9)and also letters of the English and
// to 'Z'). The task is to reverse string the string in such a way that the positiors of
// numbers in the string are left unaltered.
// Example 1:
// Input:
// a1b2igh3 -> Value of Str
// Output:
// h1g2iba3
// Explanation:
// Without changing the positions of 1, 2 and 3, only the positions of characters 'h', 'g,
// "i', 'b' and 'a' have been reversed.
// QUESTION NO : 42
// Example 2:
// Input:
// Ab5c7de96 -> Value of Str
// Output:
// ed5c7bA96
#include<iostream>
#include<cctype>
using namespace std;

void reverseString(char str[])
{
    int len  = 0;
    while(str[len]!='\0')
    {
        len++;
    }
    int start = 0;
    int end = len - 1;
    while(start<end)
    {
        //skip numbers in the reverseString
        while(isdigit(str[start]))
        {
            start++;
        }
        while(isdigit(str[end]))
        {
            end--;
        }
        // Swap characters
        char temp = str[start];
        str[start]= str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    char str[100];
    cin>>str;
    reverseString(str);
    cout<<str;
    return 0;
}
