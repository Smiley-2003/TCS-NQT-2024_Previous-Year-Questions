#include<iostream>
#include<string>
using namespace std;

string removeCharacters(const string& str)
{
    string result;
    bool isEF = false;
    for(char ch:str)
    {
        if(ch == 'E'&& !isEF)
        {
            isEF = true;
        }
        else if(isEF && ch =='F')
        {
            isEF = false;
        }
        else if(ch != 'G')
        {
            result.push_back(ch);
        }
    }
        return result;
    }
    
    int main()
    {
        string ticketNumber;
        cin>> ticketNumber;
        string modifiedTicketNumber = removeCharacters(ticketNumber);
        cout<<modifiedTicketNumber<<"\n";
        return 0;
    }
