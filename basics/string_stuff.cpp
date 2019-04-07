#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main(int argc,char** argv){
	
	std::string sInput = "Please input the number";
	std::string sNum1;
	cout<<sInput;
	// getline(cin,sNum1);
	cout<<"\nYou input:"<<sNum1;
	char cString[] = "hello world";
	char** cStringArr = {{"hello"},{"my"},{"name"},{"is"}};
	cout<<cString;
	int n=strlen(cString);
	cout<<"length:"<<n;
	for (int i=0;i<4;i++){
		cout<<cStringArr[i]<<"\n";
	}



	return 0;
}