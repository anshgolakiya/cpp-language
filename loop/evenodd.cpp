#include <iostream>
using namespace std ;
int main()
{
    int num ;
    cout<<"Entar a number : " ;
    cin>>num ;
    for(int i = 1  ; i <= num ; i++)
    {
        
        if(i % 2 == 0) // condition (num & 1 == 0) is also used to chack e or o
        {
            cout<<i<<" is even "<<endl ;
        }
        else
        {
            cout<<i<<" is odd"<<endl ;
        }
    }
    return 0 ;
}