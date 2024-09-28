#include<iostream>
using namespace std;

bool isTrianglePossible(long long n,long long m,long long k)
{
    long long T = (n * m) / k;
    if(T <= 0 || (n * m)% k != 0)
       return false;
    cout<<"YES"<<endl;
    return true;
}

int main()
{
    long long n, m, k;
    cin>> n>> m >> k;
    if(!isTrianglePossible(n,m,k))
        cout<<"NO"<<endl;
    return 0;
}