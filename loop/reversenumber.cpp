#include <iostream>
using namespace std ;
int main()
{
    int num , reversenum= 0 ;
    cout<<"Enter a number :" ;
    cin>>num ;
    for(int i = num ; i > 0 ; i = i / 10)
    {
        reversenum = reversenum * 10 + i % 10 ;
    }
    cout<<"Reverse number is : "<<reversenum<<endl ;
}
/*
    ruf work 
    num =123 ;
    i = 123 ;
    reversenum = 0 ;
    i > 0 ;
    reversenum = 0 * 10 + 123 % 10 = 0 + 3 = 3 ;
    i = 123 / 10 = 12 ;
    i > 0 ;
    reversenum = 3 * 10 + 12 % 10 = 30 + 2 = 32 ;
    i = 12 / 10 = 1 ;
    i > 0 ;
    reversenum = 32 * 10 + 1 % 10 = 320 + 1 = 321 ;
    i = 1 / 10 = 0 ;
    i = 0 ;
    i > 0 ;
    condition false ;
    print reversenum = 321 ; 
*/