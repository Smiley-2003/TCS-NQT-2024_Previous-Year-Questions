// QUESTION NO : 43 [TCS – 2023]
// A thief pretending to be a customer entered a jewellery store. On the same night, he
// planned a burglary. There is 'N' number of items with their (a[]) on display boards.
// The thief scans through the prices of all the items. The task here is to ﬁnd the most
// valuable (costliest) items of jewellery to steal.
// Example 1:
// Input:
// 8 →Value of N
// 102 101 5 7 99 1 2 3→ a[], Elements a[0]to a[N- 1], where input each element is
// seperated by a new line
// Output:
// 111→Number of elements whose adjacent elements are greater
// QUESTION NO : 43
// Explanation:
// Starting from the ﬁrst element we create subarrays of elements which are in
// ascending order.
// a[0]>a[1]
// Subarray 1: {102}
// a[1]>a[2]
// Subarray 2: {101}
// a[2]<a[3]
// In this case,we will continue to compare with next element until we ﬁnd a greater
// number.
// a[3]<a[4],continue
// a[4]>a[5],stop and create sub array
// Subarray 3: {5,7,99}
// a[5]>a[6],continue
// a[6]>a[7],end of array
// QUESTION NO : 43
// Subarray 4:{1,2,3}
// Summing up prices of each subarray:
// above,we can deduce the sub array 3 has the most valuable items.
// Hence the output is 111.
// Example 2:
// Input:
// 5 →Value of N
// 10 20 30 40 50 → a[], Elements a[0]to a[N- 1], where input each element is
// seperated by a new line
// Output:
// 150→Number of elements whose adjacent elements are greater
#include<iostream>
using namespace std;

int countValuableItems(int a[],int N)
{
    int count = 0;
    int maxSum = 0;
    int currentSum = 0;
    for(int i = 0; i < N - 1;i++)
    {
        if(a[i] < a[i+1])
        {
            currentSum+=a[i];
            count++;
        }
        else{
            currentSum += a[i];
            maxSum = max(maxSum,currentSum);
            currentSum = 0;
        }
    }
    //Check if the last element is part of a valuable iostream
    if(a[N-2] < a[N-1])
    {
        currentSum += a[N-1];
        count++;
    }
    maxSum = max(maxSum,currentSum);
    return maxSum;
}
int main()
{
    int N;
    cin>>N;
    int a[N];
    for(int i = 0; i < N;i++)
    {
        cin>>a[i];
        
    }
    int result = countValuableItems(a,N);
    cout<<result<<endl;
    return 0;
}