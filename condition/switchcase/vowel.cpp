#include<iostream>
using namespace std ;
int main()
{
    char alphabet ;
    cout<<"Enter a character : " ;
    cin>>alphabet;
    switch (alphabet)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout<<alphabet<<" is a vowel."<<endl ;
            break;
        default:
            cout<<alphabet<<" is a unvowel."<<endl ;
            break;
        }
        return 0 ;  
}