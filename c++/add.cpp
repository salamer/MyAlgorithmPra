#include<iostream>

int main(){
	using namespace std;
	float num1;
	int num2;
	cout.setf(ios_base::fixed,ios_base::floatfield);
	cout<<"num1:";
	cin>>num1;
	cout<<"num2:";
	cin>>num2;
	cout<<"added"<<num2*num1<<endl;
	return 0;
}
