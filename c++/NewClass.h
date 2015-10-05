
class NewClass{
public:
	NewClass(int number=0,char letter='a'){
		studentNumber=number;
		alphaLetter=letter;
	};
	int getNumber(){
		return studentNumber;
	};
	void changeNumber(int number){
		studentNumber=number;
	};

		
private:
	int studentNumber;
	char alphaLetter;

};
