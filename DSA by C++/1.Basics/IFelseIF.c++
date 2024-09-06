#include <iostream>
using namespace std;
int main(){
    int a;
    cin>> a;
    /*if(a>0){
        cout<< "Positive";
    }
    else{
        if(a==0){
            cout<< "IT is 0";
        }
        else {
            cout<< "Negative";
        }
        
    }

}*/

if(a>0){ cout << "Positive"; }
else if(a<0){cout << "-ve";}
else if(a==0){ cout << "0";}
else { cout<< "WTF did u wrote"; }

}