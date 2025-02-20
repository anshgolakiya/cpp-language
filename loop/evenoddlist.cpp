#include <iostream>
using namespace std ;
int main()
{
    int num ;
    cout<<"Enter a number : " ;
    cin>>num ;
    cout<<"Even number : " ;
    for(int i = 0 ; i <= num ; i = i + 2)
    {
    
        cout<<i<<" ";
        
    }
    cout<<endl ;
    cout<<"Odd number : " ;
    for(int i = 1 ; i <= num ; i = i + 2)
    {
        cout<<i<<" ";
    }

}