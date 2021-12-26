#include<iostream>
using namespace std;

//pointer


int main(){
    int a=3,b=4;
    int var=33;
    
    int * ptr;
    ptr=&var;
    
    cout<<"the value of *ptr is"<<ptr<<endl;
     cout<<"the value of *ptr is"<<var<<endl;
      cout<<"the value of *ptr is"<<*ptr;
     
    
    
    return 0;
}