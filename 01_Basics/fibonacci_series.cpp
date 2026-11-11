#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the length: ";
    cin>>n;
    int a = 0 ;
    int b = 1;
 
    cout<<a<<" "<<b<<" ";

    for(int i = 1; i<=n ; i++ ){
      int nxto = a + b ;
      cout<<nxto<<" ";
       a = b ;
       b = nxto ;}
            
}