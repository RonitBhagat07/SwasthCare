#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>> ch;
    if(ch>='a' && ch<='z'){
        cout<< "Lower case";
    }
    else if(ch>='A' && ch<='Z'){
        cout<< "Upper case";
    }
    else if(ch<='9' && ch>='0'){
        cout<< "Numeric";
    }
}
/* predict the output

int a=24;
if(a>20){
cout<< "Love";
}
else if(a==24){
cout<< "Lovely";
}
else {
cout<< "Babbar";}

cout<< a;






Output = Love24

*/