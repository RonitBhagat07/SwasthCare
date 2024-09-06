#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter a no."<< endl ;
    cin>> n ;
    int pro=1, sum=0, ld;
    for(int i=1; i<n; i++){
        ld=n%10;
        sum=sum+ld;
        pro=pro*ld;
        n=n/10;
    }
    int result = pro - sum;
        cout<< result;
}