#include<iostream>
using namespace std;
void compare(int a[],int b)
{ 
    for(int i = 0; i <b-1 ;i++)
    {
        for( int j = 0; j <b-1 ; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0;i<b;i++)
    {
        cout<<a[i];
    }
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
     compare(a,n);
    
    return 0;

}