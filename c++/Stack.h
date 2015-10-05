#include<stdio.h>
#include<stdlib.h>
int const MAXSTACK=10;
template <typename T>
class NewStack{
public:
	NewStack(){
		topLetter=0;
	};
	bool empty(){
		if(topLetter==0)
			return true;
		else
			return false;
	};
	void push(T a){
		if(topLetter<MAXSTACK)
			letterList[topLetter++]=a;
		else
			exit(1);
	};
	void pop(){
		if(!empty()){
			topLetter--;
		}
		else
			exit(1);
	};
	int size(){
		return topLetter;
	};
	T top(){
		if(!empty())
			return letterList[topLetter-1];
		else exit(1);
	};
	~NewStack()
	{

	};
private:
	T letterList[MAXSTACK];
	int topLetter;

};
