// question 18 [TCS – 2022]
// Mike came up with a new way of sorting a string. What he does is he takes all the
// unique alphabets from the string and sorts it in that order. Let say there is a string
// "apple", now it contains a p l e as distinct alphabets.
// He sorts the string apple based on his own keys let say eapl. So, ﬁrst all "e" will be
// picked from the string "apple", and then all "a", and so on till "T". Hence the ﬁnal
// sorted word becomes "eappl".
// The Input format for testing
// The candidate has to write the code to accept 2 input(s)
// •First Input - Accept value for input string.
// •First Input - Accept value for input key.
// The Output format for testing
// question 18
// •The output should be a sorted string based on the input key given by the user as
// mentioned in the above criteria. (Check the output in Example 1, Example 2)
// •Additional messages in output will cause the failure of test cases.
// Constraints:
// 0<length(input String)<=50
// Input key should contain all the alphabets of inputstrings
// No duplicates in input keys.
// Example 1:
// Input:
// apple->Input string
// eapl -> Input string, sorting key value
#include<iostream>
#include<string>

using namespace std;
string sortString(const string& input, const string& key)
{
    string sortedString = input;
    // sort the string using the key as the custom sorting criterion
    for(int  i = 0;  i<sortedString.length();i++)
    {
    for(int j = i + 1 ;j<sortedString.length();j++)
    {
        char a = tolower(sortedString[i]);
        char b = tolower(sortedString[j]);
        size_t indexA = key.find(a);
        size_t indexB = key.find(b);
    
    
    if(indexA > indexB)
    {
        swap(sortedString[i],sortedString[j]);
         }
       }
    }
    return sortedString;
}

int main(){
    string input,key;
    cin>>input>>key;
    string sortedString = sortString(input,key);
    cout<<sortedString<<endl;
    return 0;
}