#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c,t;
	cout<<"请输入三个整数"<<endl;
	cin>>a>>b>>c;
	if(a>b){
		t=a;a=b;b=t;
	}
	if(a>c){
		t=a;a=c;c=t;
	}
	if(b>c){
		t=b;b=c;c=t;
	}
	cout<<a<<"-"<<"-"<<b<<"-"<<c;
	return 0;
}
