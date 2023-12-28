#include<iostream>
using namespace std;

int main () {
	int rowno,tr;
	cin>>tr;

	rowno=1;
	while(rowno<=tr){

        int i=1;
		while(i<=rowno-1){
			cout<<" ";
			i=i+1;
        }
		int j=1;
		while(j<=tr+1-rowno){
			cout<<'*'<<" ";
			j=j+1;
		}
	cout<<endl;
	rowno=rowno+1;

	}
	return 0;
}
