#include<iostream>
using namespace std;

int main()
{
    int num=0;
    cout<<"Enter the number to be reversed: ";
    cin>> num;
    int rev=0;
    while(num!=0)
    {
        rev = rev*10 + num%10;
        num = num/10;
    }
    cout<<"The reversed number is: "<<rev<<endl;
    return 0;
}