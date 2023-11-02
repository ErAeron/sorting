#include<iostream>
using namespace std;
 void compare( int a[],int n)

{ int lowest;
for (int i = 0; i < n; i++)
{
    if(a[i]>a[i+1])
    {
        lowest=a[i+1];

    }

}
cout<<"the lowest value is"<<lowest;
}
int main()
{
    int n,a[n],i;
    cout<<"enter the value for n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the value for array";
        cin>>a[i];
    }
    compare(a,n);
    return 0;
}