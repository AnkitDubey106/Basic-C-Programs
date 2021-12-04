
/*1. Write a program in C++ to find the first 10 natural numbers. Go to the editor and also their sum
Sample output:
The natural numbers are:
1 2 3 4 5 6 7 8 9 10  55*/ 

#include<iostream>
using namespace std;

int main()
{int countsum=0;
int num;
 for(int i=1;i<=10;i++)
{
    cout<<i<<endl;
    countsum= i + countsum;

}

cout<<endl<<"the sum of first 10 natural number are ="<<countsum;

        return 0;
}
