#include <iostream>
using namespace std;
int fib(int n);
int main()
{
    int n,fibonacci=1;
    cout<<"Enter position";
    cin>>n;
    fibonacci= fib(n);
    cout<<"fibonacci value of at"<<n<<"position is"<<fibonacci;
    return 0;
}
int fib(int n)
{
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else 
        return fib (n-1)+fib(n-1);
}
    
  
