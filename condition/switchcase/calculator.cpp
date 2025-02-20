#include <iostream>
using namespace std ;
int main()
{
    int num1 , num2 ;
    char op ;
    cout<<"enter a num1 :" ;
    cin>>num1 ;
    cout<<"enter a num2 :" ;
    cin>>num2 ;    
    cout<<"enter  a operator (+,-,*,/) : " ;
    cin>>op ;

    switch (op)
    {
    case '+':
        cout<< "sum = "<<num1+num2<<endl;
        break;
    case '-':
        cout<< "sub = "<<num1-num2<<endl;
        break;
    case '*':
        cout<< "pro = "<<num1*num2<<endl;
        break;
    case '/':
        cout<< "div= "<<(float)num1/num2<<endl;
        break;
    default:
        cout<<"enter a valid operator." ;
        break;
    }
}