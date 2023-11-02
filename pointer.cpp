// call by reference concept





#include<iostream>
using namespace std;

int macho( int *x,  int *y)
{ 
    if(*x>*y)
    return *x;
    else
    return *y;

}



int  main()
{ int x,y;
cout<<"enter the value of x";
cin>>x;
int *ptr1=&x;
int *ptr2=&y;
cout<<"enter the value of y";
cin>>y;
int ptr= macho(ptr1,ptr2);
cout<<ptr;




    return 0;
}