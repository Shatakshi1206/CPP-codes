#include <iostream>
using namespace std;

int main(){
    int tr,rownum;
    cin>>tr; //3
    
    rownum=1;
    while(rownum<=tr){
        
        int i=1;
        while(i<=rownum){
            cout<<"*";
            i++;
        }
        cout<<endl;
        rownum = rownum+1;
    }
    return 0;
}
