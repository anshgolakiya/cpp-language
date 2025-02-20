#include <iostream>
using namespace std ;
int main()
{
    int num ;
    cout<<"enter a number : " ;
    cin>>num ;

    int lastdigit = num % 10 ;

    if(lastdigit % 2  == 0)
    {
        cout<<"givrn number 's lastdigit is even."<<endl ;
    }
    else
    {
        cout<<"given number 's lastdigit is odd."<<endl ;
    }
}