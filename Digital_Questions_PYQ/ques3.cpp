#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(int a,int b)
{
    if(a==0)
       return false;
       
    if(b == 0)
       return true;
       
    return a < b;
}
int main()
{
    string cardSet;
    cin>>cardSet;
    int numCards =cardSet.length();
    vector<int> cards(numCards);
    for(int i =0; i < numCards;i++)
    {
        cards[i] = cardSet[i] - '0';
    }
    sort(cards.begin(),cards.end(),compare);
    
    int startIdx = 0;
    while(startIdx < numCards && cards[startIdx] == 0)
    {
        startIdx++;
    }
    //print the rearranged card set
    for(int i = startIdx; i < numCards;i++)
    {
        cout<<cards[i];
    }
    cout<<endl;
    return 0;
}