#include<iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// Function to calculate the number of ways to choose 'P' pencils and 'E' erasers
int countWaystoChoose(int N, int M, int P,int E)
{
    //calculate the number of ways to choose 'P' pencils
    int waysToChoosePencils = factorial(N) / (factorial(P) * factorial(N-P));
    
    int waysToChooseErasers = factorial(M) / (factorial(E) * factorial(M-E));
    
    int totalWays = waysToChoosePencils * waysToChooseErasers;
    
    return totalWays;
}

int main()
{
    int N,M,P,E;
    cin>>N>>M>>P>>E;
    int ways = countWaystoChoose(N,M,P,E);
    cout<<ways;
    return 0;
}