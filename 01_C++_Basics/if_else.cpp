#include<iostream>
using namespace std;
int main(){
    int a;
   cout<<"a = ";
    cin>>a;

    if (a>0)
      cout<<"a is positive\n";
    else if (a<0)
      cout<<"a is negative\n";
    else 
      cout<<"a is zero\n";
      return 0;  
}