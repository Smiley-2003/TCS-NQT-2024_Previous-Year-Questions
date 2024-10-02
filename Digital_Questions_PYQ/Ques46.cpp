#include<iostream>
#include<algorithm>
using namespace std;

int findEvacuationSteps(int* houses, int N)
{
    int steps = 0;
    int maxMembers =* max_element(houses, houses + N);
    while(maxMembers > 0)
    {
        steps++;
        int maxIndex = distance(houses, find(houses, houses + N, maxMembers));
        for(int i = maxIndex; i < N; i++)
        {
            houses[i] = 0;
        }
        maxMembers =* max_element(houses, houses + N);
    }
    return steps;
}

int main()
{
    int N;
    cin>>N;
    int houses[N];
    for(int i  = 0; i < N;i++)
    {
        cin>>houses[i];
    }
    int evacuationSteps = findEvacuationSteps(houses,N);
    cout<<evacuationSteps<<endl;
    return 0;
}