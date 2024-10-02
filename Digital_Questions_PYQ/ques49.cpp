// QUESTION NO : 49
// Nick went to a carnival where he saw one of the booths having a strange game. The
// game was simple.
// There will be an integer number A displayed on the Screen, and you will be gwen
// another number B from the booth.
// Now, you can convert the same number.B into binary,right-adjust the binary digits
// any number of times, and then give back the decimal conversion C of it.You have to
// return a number such that, if your number C and the number displayed on the screen
// A goes through an Exclusive-OR operation it should output the maximum result.Your
// task is to ﬁnd out the minimum right binary operation which has to be performed to
// achieve the maximum results.
// Below is an idea of right-adjust operation:
// Suppose there is a binary number represented as
// D1,D2,D3,D4, where D1, D2, D3 and D4 are the different digits.
// QUESTION NO : 49
// 1. Right-Shift operation will make the number as D3D1D2D3
// The next Right-Shift operation will make the number as D3D4D1D2
// Given A and B, ﬁnd the number of operations requir28231160 achieve the maximum
// result of A (EX-OR) B, and also output the result of it.
// **Note: while performing an Exclusive-OR operation, the number of binary digits
// should be the same.
// Let us try to understand it with an example.
// consider the input A= 4 and B=5
// The respective binary of:
// A = 100
// B=101
// Default: A(EX-OR) B= 100 (EX-OR) 101=001 = 1
// Right-Shift-#1:
// B become 110
// A (EX-OR) B = 100 (EX-OR)110=010=2
#include<iostream>
using namespace std;

int countRightShifts(int num)
{
    int count = 0;
    while(num % 2 == 0)
    {
        num >>= 1;
        count++;
    }
    return count;
}

int main()
{
    int A,B;
    cin>>A>>B;
    int shifts = countRightShifts(B);
    int result = A ^ ( B >>shifts);
    cout<<shifts<<" "<<result<<endl;
    return 0;
}