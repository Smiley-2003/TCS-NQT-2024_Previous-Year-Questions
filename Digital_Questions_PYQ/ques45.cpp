// QUESTION NO : 45
// A safety and security services agency communicates to its employees only in secret
// messages in case of emergency. The employee sends the message with a secret
// code(key). Here, the code will be same combination of characters in both the
// messages(strings) sent. The task is to ﬁnd the combination of letters(key) that is
// present both the strings.
// Input format for testing:
// The candidate has to write the code to accept 2 inputs.
// First Input- Accept a string value consisting of only literal characters.
// Second Input-Accept a string value consisting of only characters.
// Output format for testing:
// The output should be string of characters which is same in both the input strings
// (check the output in Example 1 and 2)
// The output should be generated in alphabetic order sequence.
// Additional message in output cause the failure of test cases.
// QUESTION NO : 45
// Constraints:
// Str 1= {a-z}
// Str 2= {a-z}
// 0<size of str 1 <20
// 0< size of str 2 <20
// Example1:
// Input:
// beads -> value for str1
// leaps → value for str2
// Output:
// aes -> the key ‘aes’ is present in both strings
// QUESTION NO : 45
// Example2:
// Input:
// abcdefgh -> value for str1
// abcdxyz → value for str2
// Output:
// abcd –> key ‘abcd’ is present in both the strings

#include<iostream>
#include<string>
using namespace std;

string findCommonKey(const string& str1, const string& str2)
{
    string commonKey;
    int count1[26] = {0};
    int count2[26] = {0};
    for(char ch: str1)
    {
        count1[ch - 'a']++;
    }
    for(char ch : str2)
    {
        count2[ch - 'a']++;
    }
    for(int i = 0; i <26; i++)
    {
        int minCount = min(count1[i],count2[i]);
        for(int j = 0; j < minCount; j++)
        {
            commonKey += 'a' + i;
        }
    }
    return commonKey;
}

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    string commonKey = findCommonKey(str1,str2);
    cout<<commonKey<<endl;
    return 0;
}