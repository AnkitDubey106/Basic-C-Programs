#include<iostream>
using namespace std;

int main(){
    
    int a[11],sum=0;
    
    for(int i=1;i<=10;i++){
        cout<<"enter the "<<i<<"array for sum";
        cin>>a[i];
        sum=sum+a[i];
    
    }
        
    
    cout<<"the total sum is = "<<sum;
    
    return 0;
}