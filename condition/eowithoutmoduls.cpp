#include <iostream>
using namespace std ;
int main()
{
    int num ;
    cout<<"enter a number : " ;
    cin>>num ;
    if((num&1)== 0)
    {
        cout<<"given number is even."<<endl ;
    }
    else
    {
        cout<<"given number is odd."<<endl ;
    }
}