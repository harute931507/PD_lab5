#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

template <typename T>
string ntos ( T Number )
  {
     ostringstream ss;
     ss << Number;
     return ss.str();
  }

int main(){
	vector<string> test1;
	vector<string> test2;
	
	
/*
//----- test 1 -----

	vector<int> result;
	string x ="123";
	
	for (int i = 0; i < x.size(); ++i){
		result.push_back(x[i]);
		cout << result[i];
		
		if (i == x.size()-1)cout<<endl;
	}
//output 495051
*/

/*
//----- test 2 ------ 

	vector<int> result;
	string x ="314159265358979323846";	
	for (int i = 0; i < x.size(); ++i){
		result.push_back(x[i]-'0');
		cout << result[i];		
		if (i == x.size()-1){
			cout<<endl<<"size is : "<<result.size()<<endl;
		//	vector<int> re2;
		//	re2.push_back(x[0]);
		//	cout << re2[0]-'0'<<endl;
		
		// 0 -> 48 (ascii)
		// 9 -> 57 (ascii) 
		
		}
	}
	for (int i = 0; i < result.size(); ++i){
		result[i] = result[i] +2;
		cout << result[i];		
		if (i == x.size()-1){
			cout<<endl<<"size is : "<<result.size()<<endl;
		}
	}	
//output :
//987654321
//size is : 9
//11109876543
//size is : 9
*/


//----- test 3 -----
	vector<int> b(1,0);
	vector<int> c(1,0);
	
	string x = "5646542133";
	string y = "2882";
	
	for(int i = 0; i < x.size(); ++i){
		b.push_back(x[i]-'0');
	}
	for(int i = 0; i < y.size(); ++i){
		c.push_back(y[i]-'0');
	}
	
	for(int i = 0; i < c.size(); ++i){
		cout << c[i] ;
	}
	cout<<endl;
	
		for(int i = 0; i < b.size(); ++i){
		cout << b[i] ;
	}
	cout<<endl;
	
	vector<int> d(b);
	
	for(int i = y.size(); i > 0 ; --i){
		d[x.size()-y.size()+i] = b[x.size()-y.size()+i] - c[i];
	}
	/*
	for(int i = d.size()-1; i > 0; ++i){
		if(d[i]>9){
			d[i]-10;
			d[i-1]+1;
		}
	}	
	*/
	for(int i = d.size(); i>0;--i){
		if(d[i]>9){
			d[i]-=10;
			d[i-1]+=1;
		}
	}
	for(int i = 0; i < d.size(); ++i){
		cout << d[i] ;
	}
	cout<<endl<<"----------"<<endl;
	/*string result;
	for(int i = 0; i < d.size(); ++i){
		result[i] = d[i]+'0';
	}
	
*/
	
string result;

for (int i = 0; i < d.size();++i){
result += ntos(d[i]);
}

cout<<result;

	
	return 0;
}



