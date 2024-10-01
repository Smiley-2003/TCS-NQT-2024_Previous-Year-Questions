#include<iostream>
using namespace std;

int findCommonFuel(int N, int a,int b,int c,int d)
{
    for(int i = 0; i < N; i++)
    {
        int fuelInLane1 = b + (a * i);
        for(int j = 0; j < N; j++)
        {
            int fuelInLane2 = d + (c * j);
            if(fuelInLane1 == fuelInLane2)
            {
                return fuelInLane1;
            }
        }
    }
    return -1;
}
int main()
{
    int N,a,b,c,d;
    cin>>N;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    int commonFuel = findCommonFuel(N,a,b,c,d);
    
    if(commonFuel == -1)
    {
        cout<<"No same amount of fuel found"<<endl;
    }else{
        cout<<commonFuel;
    }
    
    return 0;
}