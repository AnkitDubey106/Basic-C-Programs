#include<iostream>
using namespace std;

int main()
{int count=0;
    for(int i=1;i<=1000;i++)
    {
        if(i%2==0 && i%5==0){
            cout<<i;
            count=count+1;
        }
        
    }
    
    cout<<"\n\n Total numbers which are divisible by 2 as well as 5 are "<<count;
    return 0;
}