//TCS CodeVita Questions #Q6

// Count pairs
// Given an array of integers A, and an integer K find number of happy
// elements
// Element X is happy if there exists at least 1 element whose differece
// is less than K i.e.an element X is happy if there is another element in 
// the Range[X-K,X+K]other than X itself.

// Input
// First line contains two integers N and K where N is size of the array
// and K is a number as described above. Second line contains N integers
// separated by space.


// Output 
// Print a single integer denoting the total number of happy elements

// Example 1

// Input
// 6 3
// 5 5 7 9 15 2

// Output
// 5

// Explanation
// Other than number 15,everyone has at least 1 element in the range
// Range[X-3,X+3].Hence they are all happy elements.Since these five are 
// in number, the output is 5.

#include<bits/stdc++.h>
using namespace std;
int pairs(int elements[],int n, int z){
    int count =0;
    for(int i=0;i<n;i++){
        int a=elements[i];
        int id1 = i;
        int id2 = i;
        if(i==0){
            while(elementslst[id2+1]==a)
            id2+=1;
        if(elementslst[id2+1]<=a+z && elementslst[id2+1]>=a-z)
          count+=1;
        }
        else if(i<n-1){
            while(elementslst[id2+1]==a)
            id2+=1;
            while(elementslst[id1-1]==a)
            id2-=1;
            if(((elementlst[id1-1] <= a+z) && (elementlst[id1-1]>=a-z))
            ||((elementlst[id2+1]<=a+z) &&(elementlst[id2+1]>=a-z)))
            count+=1;
        }else{
            while(elementlst[id1-1]==a)
            id1-=1;
            if(elementlst[id1-1]<=a+z && elementslst[id1-1]>=a-z)
            count+=1;
        }
    }
    return count;
}

int main(){
    
    int n,z;
    cin>>n>>z;
    int elementslst[n];
    for(int i = 0; i <n; i++){
        cin>>elementslst[i];
    }
    sort(elementslst,elementslst+n);
    cout<<pairs(elementslst,n,z);
    return 0;
}

















