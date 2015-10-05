#include "Stack.h"
#include<iostream>
#include<cstdio>
using namespace std;
int main(){

	NewStack<char> s;
	s.push('a');
	s.push('b');

	cout<<s.size()<<"\n";
	cout<<s.top()<<"\n";
	s.pop();
	cout<<s.size()<<"\n";
	cout<<s.top()<<"\n";
	return 0;
}
