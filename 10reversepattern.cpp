#include<iostream>
using namespace std;
//rverse pattern right angle triangle
int main()
{
    for(int i=7;i>=1;i--)
    {
        
        for(int j=i-1;j>=1;j--)
        {
            cout<<"$";
        }
        
        cout<<endl;
    }
    
    return 0;
}