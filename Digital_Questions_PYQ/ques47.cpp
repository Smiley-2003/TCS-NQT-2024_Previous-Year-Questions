// QUESTION NO : 47
// Our Friend Monk has ﬁnally found the Temple of Programming secrets. However, the
// door of the temple is ﬁrmly locked. Now, as per the rules of the temple, Monk needs
// to enter a Secret Password in a special language to unlock the door. This language,
// unlike English consists of K alphabets. The properties of this secret password are:
// 1.It has a length of N characters.
// 2.It is composed only of the K characters belonging to the Special language.
// 3.Each character belonging to the special language has been used at max once in the
// secret code.
// Now, Monk has no idea about what the ideal password may be and needs you help.
// You need to help Monk ﬁnd the total number of distinct candidate Strings for
// it Modulo 109+7.

// Input Format:
// The ﬁrst line contains a single integer T denoting the number of test cases. Each of
// the next T lines contain two integers N and K denoting the length of the Secret
// Password and the number of characters of the Special language to be used
// respectively.
// Output Format:
// For each test case, output the number of possible distinct secret
// passwords Modulo 109+7.
// Constraints:
// 1≤T≤10
// 1≤N≤K≤105

// Note:
// You need to print the value of each element and not their weight.
// Sample Input:
// 1
// 3 3
// Output:
// 6

// Explanation:
// Let's number the characters of the special language to be 1 , 2 and 3 respectively. So,
// all possible candidate Strings are:
// 123
// 132
// 213
// 231
// 312
// 321
// So, here we have 6 possible passwords. So, the answer = 6%(109+7)=6

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
ll MOD = 100000000007;
int main()
{
    ll T,n,res,k,i;
    cin>>T;
    while(T--)
    {
        cin>>n>>k;
        res = 1;
        for(i = k - n + 1; i<= k; i++)
            res = (res * i)% MOD;
        cout<<res<<"\n";
    }
    return 0;
}
