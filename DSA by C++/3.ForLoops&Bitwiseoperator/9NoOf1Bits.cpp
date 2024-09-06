#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter a no."<< endl ;
    cin>> n ;
    int count = 0;
    while(n!=0){
        int ld = n%10;
        if(ld==1){
            count = count + 1;
            n=n>>1;
        }
        else {
            n=n>>1;
        }

    }
     cout<< "The no. of 1 bits" << count;
}