/*  Read User Input into Array example program In C++ Programming Language
    Array Example In C++*/

// Header Files
#include <iostream>
#include<conio.h>

using namespace std;

int main() {
    
    int a[100],n,i;
    cout<<"enter the elements u want";
    cin>>n;
    
    cout<<"\n enter array elements ";
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    
    }
    
    cout<<"display no array;";
    for(i=1;i<=n;i++)
    {
        cout<<"\n"<<a[i];
    }
    
    
    return 0;
}

