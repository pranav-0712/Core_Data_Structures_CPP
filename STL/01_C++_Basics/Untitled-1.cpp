#include<iostream>
using namespace std;
int main(){
    int  b = 2 ;
    int  a = 1 ;
     if(a-- > 0 && ++b > 2) 
        cout<< "IF\n";
      else
        cout<< "else";
     
      cout<< a << " " << b <<endl ;
return 0;} 