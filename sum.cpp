

#include <iostream>
#include <cstdlib>
using namespace std;

int add(int a, int b) 
{
    int sum = a + b;
    return sum;
}

int main()
{
    cout << "Hello, Vansh: " ;
    int a1 = 5;
    int b1 = 6;
    int sum1 = add(a1, b1);
    cout << sum1 << ". ";
    
    
    int sum2 = add(7, 6);
    cout << sum2 << ". ";

    cout << "Bye" ;
    return 0;
}

