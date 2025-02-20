#include <iostream>
using namespace std ;
int main()
{
    int num1 = 10 ;

    cout<<"enter a num1 : " ;
    cin>>num1 ;
    
    cout<<"sum = "<< num1++<<endl ;
    cout<<"sub = "<< num1--<<endl ;
    cout<<"sum = "<< ++num1<<endl ;
    cout<<"sub = "<< --num1<<endl ;
}
