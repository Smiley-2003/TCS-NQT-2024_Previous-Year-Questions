#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxSubarrayLength(int k,const vector<int>& arr)
{
    int maxElement = INT_MIN;
    for(int element:arr)
    {
        maxElement = max(maxElement,element);
    }
    
    vector<int>freq(maxElement + 1,0);
    
    int distinctCount = 0;
    int maxLength = 0;
    int left = 0;
    
    for(int right = 0; right < arr.size(); right++)
    {
        if(freq[arr[right]] == 0)
        {
            distinctCount++;
        }
        freq[arr[right]]++;
        
        while(distinctCount > k - 1)
        {
            freq[arr[left]]--;
            if(freq[arr[left]] == 0)
            {
                distinctCount--;
            }
            left++;
        }
        maxLength = max(maxLength, right - left + 1);
    }
    return maxLength;
}

int main(){
    
    int n,k;
    cin>>n>>k;
    
    vector<int>arr(n);
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maxLength = maxSubarrayLength(k,arr);
    cout<<maxLength<<endl;
    return 0;
}