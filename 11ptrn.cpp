#include<iostream>
using namespace std;
// pattern decreasing order
int main()
{
    for(int i=1;i<=6;i++)
    {
        
        for(int j=5;j>=i;j--)
        {
            
            cout<<j;
        }
    
        cout<<endl;
    }
    
    return 0;
}