#include <iostream>
using namespace std ;
int main()
{
    int num , sum = 0 ;
    cout<<"Enter a number :" ;
    cin>>num ;
    for(int i = num ; i > 0 ; i = i/10)
    {
        sum = sum + i % 10 ;
    }
    cout<<"Sum of digit is : "<<sum<<endl ;
}
/*
    run work
    num = 123 ;
    i = 123 ;
    sum = 0 ;
    i > 0 ;
    sum = 0 + 123 % 10 = 0 + 3 = 3 ;
    i = 123 / 10 = 12 ;
    i > 0 ;
    sum = 3 + 12 % 10 = 3 + 2 = 5 ;
    i = 12 / 10 = 1 ;
    i > 0 ;
    sum = 5 + 1 % 10 = 5 + 1 = 6 ;
    i = 1 / 10 = 0 ;
    i = 0 ;
    i > 0 ;
    condition false ;
    print sum = 6 ;
*/