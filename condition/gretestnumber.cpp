#include <iostream>
using namespace std ;
int main()
{
    int num1 , num2 , num3 ;
    cout<<"enter a num1 : " ;
    cin>>num1 ;
    cout<<"enter a num2 : " ;
    cin>>num2 ;
    cout<<"enter a num3 : " ;
    cin>>num3 ;
    /*
    if(num1 > num2 && num1 > num3) num1 gretaestnumber num1
    else if (num2 > num1 && num2 > num3) gretestnumber num2
    else gretestnumber num3 
    */
    if(num1>num2)
    {
        if(num1>num3)
        {
            cout<<"gretest numbee is " << num1 ;
        }
        else
        {
            cout<<"gretest number is " << num3 ;
        }
    }
    else
    {
        if(num2>num3)
        {
            cout<<"gretest numbee is " << num2 ;
        }
        else
        {
            cout<<"gretest number is " << num3 ;
        }
    }
}