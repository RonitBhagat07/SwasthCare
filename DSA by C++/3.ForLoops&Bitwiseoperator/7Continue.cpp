#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter a no."<< endl ;
    cin>> n ;

for(int i=1; i<=n; i++){
    cout<< "Hey" ;
    continue;                    //To eliminate the further block of current loop
    cout<< "reply nhi dogi kya?";
}
}