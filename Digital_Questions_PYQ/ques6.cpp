#include<bits/stdc++.h>
using namespace std;

int countClimbingWays(int N,int I, int X)
{
    int ways[N + 1];  
    ways[I] = 1; //The number of ways to reach rock I is 1,as he's already there.
    ways[I - 1] = 1;//This is to handle the initial step properly
    
    
    for(int i = I + 1; i <= N; i++)
    {
        ways[i] = 0;
        
        for(int j = 1; j <= X && i - j >= I; j++)
        {
            ways[i] += ways[i - j];
        }
    }
        return ways[N];
    }
    
    
    int main()
    {
        int N,I,X;
        cin>>N;
        cin>>I;
        cin>>X;
        int numWays = countClimbingWays(N,I,X);
        cout<<numWays;
        return 0;
    }
