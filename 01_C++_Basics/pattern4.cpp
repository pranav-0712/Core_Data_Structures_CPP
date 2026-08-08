#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;
    
    while(i<=n) {
        int j= 1;
        while(j<=n){
        cout<<n-j+2;
        j+=1;
        }
        cout<<" ";
        i+=1;
    }
                 
    return 0;
}
          