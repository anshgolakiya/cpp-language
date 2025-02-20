#include <iostream>
using namespace std ;
int main()
{
    int num ;
    cout<< "enter a number : " ;
    cin>>num ;
    int frist = num /100 ;
    int second = (num%100) /10 ;
    int third = num % 10 ;
    int reverse = third * 100 + second * 10 + frist ;
    cout<< "reverse number is : " << reverse << endl ;
    return 0;
}