// QUESTION NO : 41[TCS – 2022]
// Given N stones, each stone has some weight assigned to it. A box with C capacity is
// also given. The task is to ﬁnd out, the minimum number po/boxes which are e require
// the box.
// Note: C>Arr[0] to Arr[N], where Arr[i] represents the weight of ith stone.
// Example 1:
// Input:
// 5 -> Value of N
// 10 20 30 40 50 -> Element of Arr[]
// 60 -> Value of C
// Output:
// 3 ->Minimum 3 boxes required.
// Explanation:
// Arr[]={10,20,30,40,50} and C-60
// 1st box={10,20,30}
// 2nd box=(40)

#include<iostream>
using namespace std;

int minBoxesRequired(int n,int arr[],int c)
{
    int boxes = 0;
    int currentCapacity = c;
    for(int i=0;i<n;i++)
    {
        if(arr[i] <= currentCapacity)
        {
            currentCapacity -= arr[i];
        }
        else
        {
            boxes++;
            currentCapacity = c - arr[i];
        }
    }
    if(currentCapacity < c)
        boxes++;
        return boxes;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int  i = 0; i < n;i++)
    {
        cin>>arr[i];
    }
    
    int c;
    cin>>c;
    int minBoxes = minBoxesRequired(n,arr,c);
    cout<<minBoxes;
    return 0;
}