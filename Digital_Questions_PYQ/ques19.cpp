// question 19 [TCS – 2023]
// Mikes likes to play with numbers. His friends are also good with numbers and often
// plays mathematical games. They made a small game where they will spell the last
// digit of a factorial of a number other than 0. Let say the given number is 5, so 5! (5
// factorial) will be
// 5 *4* 3* 2* 1= 120.
// Here 0 is the last digit. But, we don't want 0, we want a
// number other than 0.
// Then the last digit is 2. This is what we have to output
// Example 1:
// Input
// 5 ->Input number
// Output
// 2->last non-zero digit
// question 19
// Explanation:
// Input number is 5, so 5!=120. The last nonzero digit is 2. And this is the output.
// Example 2
// Input:
// 9-> Input number.
// Output:
// 8-> last non-zero digit

#include<iostream>
using namespace std;

int fact(int n)
{
    if(n <= 1)//Base condition
     
       return 1;
       
    return n * fact(n-1);
}

int main()
{
    int n;
    cin>>n;
    
    int factorial = fact(n);
    
    while(factorial % 10 == 0)
    {
        factorial /= 10;
    }
    cout<<factorial % 10;
    
    return 0;
}