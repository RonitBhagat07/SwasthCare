#include <iostream>
using namespace std;
int main(){
    int n, ld, rev=0 ;
    cout<< "enter \n" ;
    cin>> n;
    int original=n;

    while(n!=0){
        ld=n%10;
        rev = rev*10 + ld;
        n=n/10;
    }

    if(rev==original){
        cout<<"palindrome";
    }
    else {
        cout<<"Not a palindrome" ;}

}

