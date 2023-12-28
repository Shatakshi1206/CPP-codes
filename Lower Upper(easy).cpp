#include <iostream>
using namespace std;

int main(){
    char s;
    cin>>s;
    
    if(s>='a' and s<='z'){
        cout<<"lowercase";
    }
    else if(s>='A' and s<='Z'){
        cout<<"UPPERCASE";
    }
    else{
        cout<<"Invalid";
    }
    return 0;
}
