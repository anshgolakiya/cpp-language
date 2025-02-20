#include <iostream>
using namespace std ;
int main()
{
    int mark ;
    cout<<"enter a total mark : " ;
    cin>>mark ;

    if(mark>90 && mark<=100)
    {
        cout<<"you are pass and grade is A ";
    }
    else if(mark>80 && mark<=90)
    {
        cout<<"you are pass and grade is B ";
    }
    else if(mark>70 && mark<=80)
    {
        cout<<"you are pass and grade is C ";
    }
    else if(mark>60 && mark<=70)
    {
        cout<<"you are pass and grade is D ";
    }
    else 
    {
        cout<<"you are fail." ;
    }
}