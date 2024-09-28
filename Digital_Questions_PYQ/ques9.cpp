#include<bits/stdc++.h>
using namespace std;
int main()
{
    int H,M;
    cin>>H;
    cin>>M;
    // convert hours to minutes
    int currentTotalMinutes = H * 60 + M;
    
    // Calculate time left in minutes
    int timeLeftMinutes = 24 * 60 - currentTotalMinutes;
    
    // Convert time left to hours and minutes
    
    int timeLeftHours = timeLeftMinutes / 60;
    
    int timeLeftMins = timeLeftMinutes % 60;
    
    cout<<setfill('0')<<setw(2)<<timeLeftHours<<"::"
        <<setfill('0')<<setw(2)<<timeLeftMins;
          
    return 0;
       
}