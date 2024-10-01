// Question 21 
// question 21 [TCS – 2023]
// Alice is a mischievous guy. He gives a task to his friend Bob.
// The task has follows:
// There are N cards numbered from 1 to N and a number K. Bob should select X
// number of cards from N cards. Let the minimum card number from the selected card
// numbers be Y. Bob should select X such that X * Y should be equal to K. Print YES if
// it is possible else NO. As Bob has urgent work, he requested you to solve this task.
// Example 1:
// Input:
// 5 6 > N and K values
// Output:
// YES
// Explanation:
// question 21
// Explanation:
// He can select two cards in which the minimum number is 3.
// i.e.(3,4),(3,5), (3,6) this combination of cards satisﬁes the condition
#include<iostream>
using namespace std;

string isPossible(int N, int K)
{
    for(int X = 1; X <= N; X++)
    {
        int Y = K / X;
        if(Y * X == K && Y <= N)
        {
            return "YES";
        }
    }
    return "NO";
}

int main()
{
    int N,K;
    cin>>N>>K;
    string result = isPossible(N,K);
    cout<<result<<endl;
    return 0;
}