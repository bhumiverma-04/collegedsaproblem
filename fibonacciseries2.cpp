using namespace std;
int main()
{
    int n;
    int a = 1, b=2, next;
    cout<<"Enter the position";
    cin>>n;
    cout<<"Fibonacci series:";
    
    for (int i=0;i<n;i++)
        {
            cout<<a<<"";
            next = a+b;
            a=b;
            b=next;
        }
    return 0;
}
