#include <iostream>
using namespace std;
int main(){
    int  n;
    cin>> n;
    /*
1
2 2
3 3 3
4 4 4 4
    */
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<< i << " ";
            j=j+1;
        }
        i=i+1;
        cout<< endl;
    }
}