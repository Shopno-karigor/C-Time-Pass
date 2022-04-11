//Find Factorial for a given input
#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n;
    cout<<"Enter an positive integer: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<factorial(n);
    return 0;
}
int factorial(int n)
{
    if(n!=1)
     return n*factorial(n-1);
}
