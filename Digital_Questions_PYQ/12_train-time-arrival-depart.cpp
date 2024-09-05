//TCS codevita Question #Q5
//Railway station

//Given schedule of trains and theirv stoppage time at a Railway Station,
// find minimum number of platforms needed
//If Train A'a departure time is x and Train B's arrival time is x, then
// we can't accomodate Train B on the same platform as Train A

// Input
// First line contains N denoting number of trains
// Next N line contain 2 integers, a and b, denoting the arrival time and
// stoppage time of train

//Output 
// single integer denoting the minimum numbers of platforms needed to 
// accomodate every train.

//Example 2

//Input
//2
//2 4
//6 2

// Output
// 2

//Explanation
// Platform #1 can accomodate train 1.
// Platform #2 can accomodate train 2.
// the departure of train 1 is same as arrival of train 2,i.e. 6,
// and thus we need s seperate platform to accomodate train 2.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    //READING INPUT
    int n;//The Number of trains
    cin>>n;
    //a[]->array for storing arrival time
    //b[]->  "    "     "    departure time
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        b[i]=a[i]+b[i];
    }
    //Sorting the Arrival and Departure Times
    sort(a,a+n);
    sort(b,b+n);
    
    //Tracking Platforms
    int p = 1,r=1,i=1,j=0;
    
    //Platform Management(While loop)
    while(i<n && j<n)
    {
        if(a[i]<=b[j])//if a train arrives before the previous train departs
        {
            p++;
            i++;
        }
        else if(a[i]>b[j])//if a train arrives after the previous one departs
        {
             p--;
             j++;
        }
        //for each step udpate r(the maximum number of platforms)
        if(p>r)
            r=p;
    }
    //Final output ,r holds the maximum number of platform required.
    cout<<r;
    return 0;
}
