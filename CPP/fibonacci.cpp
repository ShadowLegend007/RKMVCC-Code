#include <iostream>
using namespace std;

int main() 
{
    int num1,num2,n,nextTerm = 0;
    cout<<"Enter the first number:";
    cin>>num1;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: "<<(num1-1);
    num2=num1-1;
    cout << ", "<<num1;
    for (int i = 2; i <= n; ++i) 
    {
        nextTerm=num1+num2;
        cout << ", "<<nextTerm;
        num2=num1;
        num1=nextTerm;
    }
    return 0;
}
