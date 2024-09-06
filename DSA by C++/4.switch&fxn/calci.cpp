#include <iostream>
using namespace std;
int main(){
    int a,b;

    cout<<"Enter a and b"<< endl;
    cin>> a>> b;

    char op;
    cout<< "Enter the operator"<< endl;
    cin >> op;

    switch(op){
        case '+': cout<< (a+b)<< endl;
        break;
        case '-': cout<< (a-b) << endl;
        break;
        case '*': cout<< (a*b)<< endl;
        break;
        case '/': cout<< (a/b) << endl;
        break;
        default: cout<< "enter a valid operation" ;
        break;
    }
}