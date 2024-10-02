// Question 42

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
