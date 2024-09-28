#include<bits/stdc++.h>
using namespace std;

bool isTransactionPossible(int a[],int N)
{
    int change30 = 0;
    int change60 = 0;
    int change120 = 0;
    for(int i  = 0; i < N; i++)
    {
        //30
        if(a[i] == 30)
        {
            // if customer pays Rs30, no change required
            change30++;
        }
        //60
        else if(a[i] == 60)
        {
            // If customer pays rs 60 return rs 30 change if avaible
            if(change30 > 0)
            {
                change30--;
            }
            else{
                return false;
            }
            change60++;
        }
        //120
        else if(a[i]==120)
        {
            // if customers pays 120rs ,return 90rs change if available
            if(change30 >0 && change60 > 0)
            {
                change30--;
                change60--;
            }
            else if(change30 >= 3)
            {
                change30 -= 3;
            }
            else{
                return false;
            }
            change120++;
        }
    }
        return true;
    }
    
    int main()
    {
        int N;
        cin>>N;
        
        int a[N];
        for(int i = 0; i < N; i++)
        {
            cin>>a[i];
        }
        if(isTransactionPossible(a,N))
        {
            cout<<"Transaction successful"<<endl;
        }
        else{
            cout<<"Transaction failed"<<endl;
        }
        return 0;
    }
