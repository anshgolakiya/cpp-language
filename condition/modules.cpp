#include <iostream>
using namespace std ;
int main()
{
    int num ;
    int divisible ;
    int count= 1;
    cout<<"enter a number : " ;
    cin>>num ;
    cout<<"enter a divisible : " ;
    cin>>divisible ;
    if(num%divisible == 0)
    {
        count++ ;
    }
    else
    {
        count-- ;
    }
    if (count == 2)
    {
       cout<<"divisible" ;
    }
    else
    {
        cout<<"undivisible" ;
    }
}