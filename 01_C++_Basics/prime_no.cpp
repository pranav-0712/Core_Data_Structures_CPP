#include<iostream>
using namespace std;

int main() {
    int n ;
    cout<<"Enter n:" ;
    cin>>n ;
    bool isprime = 1 ;
    for(int i = 2; i<n;i++)

       if(n%i ==0){
         isprime = 0 ;
         break;}
       
         if(isprime ==  0)

       cout<<"not prime"<<endl;  
        
         else if(n==1)

         cout<<"neither prime nor composite";

         else
       
       cout<<"prime"<<endl;}  