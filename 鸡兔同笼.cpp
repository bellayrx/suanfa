#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//鸡兔同笼 
int main(int argc, char** argv) {
	cout<<"请输入鸡和兔的腿数目n：" ;
	int n;
	cin>>n;
	cout<<"请输入鸡和兔的数目m：" ;
	int m;
	cin>>m;
	int y;
	y=(4*n-m)/2;
	
	int x=n-y;
	if(m%2==1||x<0||y<0){
		cout<<"no answer"; 
	}else{

	cout<<"鸡的数目是："<<x<<"鸭的数目是"<<y<<endl;
}
	 
	return 0;
}
