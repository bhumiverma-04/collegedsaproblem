#include<iostream>
using namespace std;
int main()
{
    int arr[100],n;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter"<<n<<"values";
    for(int i=0;i<n;i++) 
{ 
cin>>arr[i];
}
    cout<<"you had entered these values";
    for(int i=0;i<n;i++)
{ 
   cout<<arr[i]<<"";
} 
    cout<<"\ninsert new value";
    int val;
    cin>>val;
    arr[n]=val;
    cout<<"after insertion of new val array is";
    for(int i=0;i<=n;i++)
{
    cout<<arr[i]<<"";
}
    return 0;
}   
