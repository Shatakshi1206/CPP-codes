#include <iostream>
using namespace std;

int main (){
int tr , rownum;
cin>>tr;

rownum=1;
while(rownum<=tr){

  //space
  int j=1;
  while(j<=(tr-rownum)){
      cout<<" ";
      j++;
  }
    
  //star
  int i=1;
  while(i<=rownum){
      cout<<"*";
      i++;
  }
  
  rownum= rownum+1;
  cout<<endl;
  
}
    
    return 0;
}
