#include <iostream>
using namespace std;
int main(){
    int num = 2;
    cout << endl;
    switch(num){
        case 1: cout<< "First" <<endl;
        break;
        case 2: cout<< "2nd" << endl;
        break;
        default: cout<< "Whatever" << endl;
        break;
    }
}
/*continue; skips the iteration*/