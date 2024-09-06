//Find sum of numbers from 1 to n
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter A NO." <<endl;
    cin>> n;
    int sum=0;
    for(int i=0; i<=n; i++){
        //sum=sum+i;
        sum+=i;
    }
    cout<< sum;
}