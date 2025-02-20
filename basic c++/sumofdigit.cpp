#include <iostream>
using namespace std;
int main()
{
    int num ;
    cout<< "enter a number : " ;
    cin>>num ;
    int frist = num /100 ;
    int second = (num % 100) / 10 ;
    int third = num % 10 ;

    int sum = frist + second + third ;
    cout<< "sum of digit is : " << sum << endl ;    
    return 0 ;
}