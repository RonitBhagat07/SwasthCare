#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;

/*
*****
 ****
  ***
   **
    *
*/
    int i=1;
    
    while(i<=n){ 
        int j=1; int star=1;
        while(j<=i-1){
            cout<<" ";
            j=j+1;
        }
        
        while(star<=n-i+1){
            cout<< "*";
            star=star+1;
        }
        i=i+1;
        cout<< endl;
    }
   
}