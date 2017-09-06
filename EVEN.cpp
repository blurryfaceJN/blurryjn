#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >>number;
    if(number <0)
    {
        return 0;
    }
    if(number%2==0)
    {
        cout<<"Even";
    }
    else
    cout<<"Odd";
    

    return 0;
}


