#include<iostream>
using namespace std;

bool isDivisor(int number, int divisor)
{
    return number % divisor == 0;
}

int main()
{
    // get user inputs
    int X,A;
    cin>>X;
    cin>>A;
    
    for(int N = 1; N <= X; N++)
    {
        for(int Z = 1; Z <= N; Z++)
        {
            if(X == A * N + Z && isDivisor(N,Z))
            {
                cout<<N;
                //exit the loops as the equation is satisified
                return 0;
            }
          } 
        }
        cout<<"None";
        //if no values of N and Z satisfy the equation
        
        return 0;
    
}