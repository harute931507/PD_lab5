#ifndef HUGEINT_H
#define HUGEINT_H

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

class HugeInt{
	friend istream & operator >> (istream &, HugeInt &);
	friend ostream & operator << (ostream &, const HugeInt &);
	
	public:
		HugeInt();
		HugeInt(int input);
		HugeInt(string input);
		
		HugeInt operator + (HugeInt a);
		HugeInt operator - (HugeInt a);
		
	private:
		
		vector<int> v;
};


#endif
