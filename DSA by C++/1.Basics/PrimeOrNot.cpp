#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i=2;
    while(i<=n){
        if(n%i==0){
            cout<< " "<<n<< " is Not prime"<< endl;
            return 0;  //this stops the code here and doesn't run any further code ahead of it
        }
        i=i+1;
    }
     cout << "prime"<< endl; 
     return 0;
}