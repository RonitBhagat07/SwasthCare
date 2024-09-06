// 0 1 1 2 3 5 8...
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter no. of terms" <<endl;
    cin>> n;

    int a=0;
    int b=1;
    if(n>0){
        cout<< "0 " ;
    }
for(int i=2; i<=n;  i++){
    int sum= a+b;
    cout<< sum <<" " ;
    a=b;
    b=sum;
}

}