#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//����ͬ�� 
int main(int argc, char** argv) {
	cout<<"�����뼦���õ�����Ŀn��" ;
	int n;
	cin>>n;
	cout<<"�����뼦���õ���Ŀm��" ;
	int m;
	cin>>m;
	int y;
	y=(4*n-m)/2;
	
	int x=n-y;
	if(m%2==1||x<0||y<0){
		cout<<"no answer"; 
	}else{

	cout<<"������Ŀ�ǣ�"<<x<<"Ѽ����Ŀ��"<<y<<endl;
}
	 
	return 0;
}
