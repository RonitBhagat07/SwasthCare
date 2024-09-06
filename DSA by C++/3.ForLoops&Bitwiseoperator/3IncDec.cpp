#include <iostream>
using namespace std;
int main(){
    int i=3, a=4; 
    a = a+ (i++) ; //post-increment = The value gets used first and then changes
    cout<< a << endl;
    cout<< i ;
}