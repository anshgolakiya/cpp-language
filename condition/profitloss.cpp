#include <iostream>
using namespace std ;
int main()
{
    int sp , cp ;
    cout<<"enter a selling price :" ;
    cin>>sp ;
    cout<<"enter a cost price :" ;
    cin>>cp ;

    if(sp > cp)
    {
        int profit = sp - cp ;
        cout<<"your profit : "<<profit<<endl ;
    }
    else if(cp > sp)
    {
        int loss = cp = sp ;
        cout<<"your loss : "<<loss<<endl ;
    }
    else
    {
        cout<<"no profit no loss";
    }
}