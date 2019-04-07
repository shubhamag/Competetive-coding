#include <iostream>
#include <vector>

using namespace std;


template <class T>
void print(std::vector<T> const &input)
{
	cout<<endl;
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}

int main (int argc,char** argv){

	vector<double> vDouble(3);
	print(vDouble);
	vDouble[0] = 3.0;
	vDouble[1] = 3.1;
	vDouble[2] = 4.5;
	print(vDouble);
	vDouble.push_back(4.7);
	print(vDouble);
	cout<<endl;
	vector <int> vInt = {2,3,4,5,6};
	print(vInt);
	/* returns:
	0 0 0 
	3 3.1 4.5 
	3 3.1 4.5 4.7 

	2 3 4 5 6
	*/

}