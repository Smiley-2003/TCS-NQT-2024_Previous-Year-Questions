// QUESTION NO : 48 [TCS – 2023]
// Alice did a survey of students training for competitive programming, where the ith
// student gave the response - "I practiced for xi hours".
// Alice recorded the observations as the number of minutes each student practiced (60
// * xi). She could also have written the number with leading zeroes. For example if a
// student said "I studied for 2 hours", Alice could have stored the data as 00120
// instead of 120.
// Now Bob took Alice's notebook and for each number, he did one of the following
// operations :
// 1.Rearranged its digits
// 2.Wrote a Random number instead of it.
// Thus Bob generated number y1, y2, ... yn.
// Your task is to tell for each number yi, can it be a permutation of numbers divisible by
// 60(possibly with leading zeroes)
// QUESTION NO : 48
// Input
// The ﬁrst line of input contains a single integer N - the number of people surveyed. (1
// <= N <= 500)
// The next N lines contains a single number of 2 to 100 digits.
// Output
// For each number print YES, if yi can be a permutation of numbers divisible by 60, else
// NOExample 1
// Input
// 5
// 603
// 006
// 205
// 228
// 1053
// Output
// YES
// YES
// NO
// NO
// NO
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int t = 0; t < n; t++)
    {
        string s;
        cin>>s;
        
        int sum = 0, ct_0 = 0,even = 0;
        for(int i = 0; i <(int)s.size(); i++)
        {
            sum += s[i] - '0';
            ct_0 += s[i] == '0';
            even += (s[i] - '0') % 2 == 0;
        }
        sum % 3 == 0 and ct_0 > 0 and even > 1 ? cout<<"YES\n": cout<<"NO\n";
    }
    return 0;
}