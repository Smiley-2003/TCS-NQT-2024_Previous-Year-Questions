// question 12 [TCS – 2023]
// Given N Rupees. A liter plastic bottle of milk costs R1 Rupees and a liter of the
// glass bottle of milk costs R2 Rupees. But the empty glass bottle after buying can
// be exchanged for R3 Rupees. Find the maximum liters of milk which can be bought
// with N Rupees.
// Example-1:
// Input:
// 10 →Value of N
// 11 →Value of R1 i.e. price of plastic bottle
// 9→Value of R2 i.e. price of glass bottle
// 8 →Value of R3 i.e. price of empty glass bottle
// Output:
// 2
// Explanation:
// 1 glass bottle can be bought.
// in hand 1 rs .Total milk – 1 litre
// return one glass bottle.
// in hand 1 + 8 =9rs.
// in hand =0 rs.
// total milk = 1+1 litre=2 litres
#include<bits/stdc++.h>
using namespace std;
void maxLitres(int budget, int plastic, int glass, int refund)
{
    if(glass - refund < plastic)
    {
        int ans = max((budget - refund)/(glass - refund),0);
        budget -= ans * (glass - refund);
        ans += budget/ plastic;
        cout<<ans<<endl;
    }
    else
        cout<<(budget/plastic)<<endl;
}

int main(){
    int budget, plastic, glass,refund;
    cin>>budget;
    cin>>plastic;
    cin>>glass;
    cin>>refund;
    maxLitres(budget, plastic, glass,refund);
    return 0;
}
