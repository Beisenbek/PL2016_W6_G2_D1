#include <iostream>

using namespace std;


int main(){

	int n;

	cin >>n;

	string s="";

	do{
	 	int k = n % 10;
	 	s = char(k+48) + s;
	 	n = n / 10;
	}while(n>0);

	for(int i = 0; i < s.length(); ++i){
		cout << s[i] << "===";
        }

	return 0;
}