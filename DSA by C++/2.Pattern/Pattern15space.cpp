#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
 //    *
 //   **
 //  ***
 // ****
 //***** 
    int i=1 ;
    while(i<=n){ 
        int j=1;
// for space
        int space = n-i;
        while(space){
            cout<< " " ;
            space = space - 1;
        }
 // for stars
        while(j<=i){
            cout<< "*";
            j=j+1;
        }

        i=i+1;
        cout<< endl;
    }

}