#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <array>

using namespace std;
using namespace array;

int g_iMyGlobalPi=3;
const double PI = 3.14159;
bool os_is_linux  =true;


template <class T>
void swap(T A[],int a,int b){

	T temp = A[a];
	A[a] = A[b];
	A[b] = temp;
}

template <class T>
void bubble_sort(T A[],int len){

	cout<<"\nBubble sort...\n";
	// int len = sizeof(A)/sizeof(A[0]); ##wont work correctly

	for (int i=0;i<len;i++){
		for (int j=i+1;j<len;j++){

			if(A[j]<A[i] ){
				swap(A,i,j);
			}


		}
	}
}	

template <class T>
void print_array(T A[],int len){

	cout<<"Printing array\n";
	// int len = sizeof(A)/sizeof(A[0]);
	for (int i =0;i<len;i++){
		cout<<A[i]<<"\n";

	}
}




int main(int argc, char** argv) {

	if(argc !=1){
		cout <<"Entered args:\n";
		for (int i=1;i<argc;i++){
			cout <<argv[i] <<"\n";
		}
	}

	cout<<"Checking int size and limits\n";
	cout<<"Size of int in bytes: "<<sizeof(int)<<"\n";
	cout<<"limits int: min:"<<std::numeric_limits<int>::min() << "  max:"<<std::numeric_limits<int>::max() <<"\n";
	cout<<"limits int: min:"<<std::numeric_limits<unsigned int>::min() << "  max:"<<std::numeric_limits<unsigned int>::max() <<"\n";


	int Arr[] = {3,2,5,6,3,2,1,7,8,10};
	int len = sizeof(Arr)/sizeof(Arr[0]);
	cout<<"Length of array is "<<len<<"\n";


	cout<<"Testing sorting codes on C-style array";
	bubble_sort(Arr,len);
	print_array(Arr,len);

	array<int> arrStl = {2,3,4,12,43,24,0,9,-1};
	cout<<"arrStl size: "<<arrStl.size();

	return 0;
}




