#include "NewClass.h"
#include<iostream>
using namespace std;

int main(){
	NewClass aljun(6202,'a');
	cout<<aljun.getNumber()<<"\n";
	aljun.changeNumber(6203);
	cout<<aljun.getNumber()<<"\n";
	return 0;
	
}
