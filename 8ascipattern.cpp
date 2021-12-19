#include<iostream>
using namespace std;
//pattern using ASCII value :- typecasting - conversion of datype
int main()
{
    int i,j;
    for(i=65;i<=72;i++)
    {
        for(j=65;j<=72;j++)
        {
            cout<<(char)j;
            
        }
        cout<<endl;
    }
    
    return 0;
}