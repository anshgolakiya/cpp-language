#include <iostream>
using namespace std ;
int main()
{
    int year ;
    cout<<"Enter a yera : " ;
    cin>>year ;
    if(year&4 == 0 && year%100 != 0 || year%400 == 0)
    {
        cout<<year<<"is a leep year."<<endl ;
    }
    else
    {
        cout<<year<<"is not a leep year."<<endl ;
    }
}