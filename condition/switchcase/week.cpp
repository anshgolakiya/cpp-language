#include <iostream>
using namespace std ;
int main()
{
    int num ;
    cout<<"enter a number : ";
    cin>>num ;

    switch (num)
    {
    case '1':
        cout<<"sunday"<<endl ;
        break;
    case '2':
        cout<<"Monday"<<endl ;
        break;
    case '3':
        cout<<"Tuesday"<<endl ;
        break;
    case '4':
        cout<<"Wednesday"<<endl ;
        break;
    case '5':
        cout<<"Thrusday"<<endl ;
        break;
    case '6':
        cout<<"friday"<<endl ;
        break;
    case '7':
        cout<<"Saturdau"<<endl ;
        break;
    default:
        cout<<"entr a valid number."<<endl;
        break;
    }
}