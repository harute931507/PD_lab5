#include"HugeInt.h"

HugeInt::HugeInt(){
}
HugeInt::HugeInt(int input){
	ostringstream int_to_string;
	int_to_string << input;
	
	for(int i = 0; i < int_to_string.size(); ++i){
		v.push_back(int_to_string[i]-'0');
	}
}
HugeInt::HugeInt(string input){	
	for(int i = 0; i < input.size(); ++i){
		v.push_back(input[i]-'0');
	}
}

istream & operator >> (istream & in, HugeInt & input){
	string str;
	in >> str;
	for(int i = 0; i < str.size(); ++i){
		input.v.push_back(str[i]-'0');
	}
	return in;
}
ostream & operator << (ostream & out, const HugeInt & output){
	
}


//for operator +
HugeInt HugeInt::operator + (HugeInt a){
}
