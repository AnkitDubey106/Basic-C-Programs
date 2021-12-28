#include<iostream>
using namespace std;
//enter elements in array and display it
int main(){
    
    int a[100],i=0;
    
    char choice;
    do{
        cout<<"enter the  "<< i+1 << " element";
        cin>>a[i];
        
        cout<<"do you want to add more element (press Y or y)";
        cin>>choice;
      
      
      i++;  
    }
    while(choice=='Y' || choice=='y');
    
    
    cout<<"entered elements are"<<endl;
    for(int k=0;k<i;k++){
    
        cout<<a[k];
        cout<<" ";
    }
    
    return 0;
}
