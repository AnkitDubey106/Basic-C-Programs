#include<iostream>
using namespace std;

int main()
{
    int a[100]={3,2,4,5,6,34,45,66,111},max;
    max=a[0];
    for(int i=1;i<9;i++){
        if(max<a[i])
        {
            max=a[i];
        }
        
    }
    
    cout<<"highest no in array = "<<max;
    return 0;
}
