#include<iostream>
using namespace std;
int compare( int b) 
{
    return 0;

}
int main()

{
      int n,a[15],i;
    cout<<"enter the length of an array";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the element: ";
        cin>>a[i];

    }
    for(i=0;i<n;i++)
    {
    
        cout<<a[i];

    }
    compare(&n);
     for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}