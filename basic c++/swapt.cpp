#include <iostream>
using namespace std ;
int main()
{
    int num1 , num2 , temp ;
    cout<< "enter a num1 : " ;
    cin>>num1 ;
    cout<< "enter a num2 : " ;
    cin>>num2 ;
    // swapt code ;
    temp = num1 ;
    num1 = num2 ;
    num2 = temp ;
    // after swapt code given value
    cout<<"num1 = " <<num1 <<endl;
    cout<<"num2 = " <<num2 <<endl ;
}