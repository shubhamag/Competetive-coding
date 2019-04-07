/*iterators*/

// C++ code to demonstrate the working of 
// iterator, begin() and end() 
#include<iostream> 
#include<iterator> // for iterators 
#include<vector> // for vectors 
#include <map>
#include <string>
using namespace std; 
int main() 
{ 
    vector<int> ar = { 1, 2, 3, 4, 5 }; 
      
    // Declaring iterator to a vector 
    vector<int>::iterator ptr;   //NEED TO DECLARE PTR TO BE OF TYPE vector iterator !
      
    // Displaying vector elements using begin() and end() 
    cout << "The vector elements are : "; 
    for (ptr = ar.begin(); ptr < ar.end(); ptr++) 
        cout << *ptr << " "; 

    map <int,int> myMap = {{2,3},{4,5},{7,7}};
    myMap.insert(pair<int,int> (3,3));
    map<int,int>::iterator itr;

    for (itr=myMap.begin();itr!=myMap.end();itr++){
    	cout <<"\nKey:"<< itr->first <<" Val:"<<itr->second;

    }
    // A good use of auto is to avoid long initializations when 
    //creating iterators for containers.
    cout<<endl<<"Using auto..."<<endl;
    for (auto itr = myMap.begin(); itr != myMap.end(); itr++) 
        cout <<"\nKey:"<< itr->first <<" Val:"<<itr->second; 
    int k1 = 2;
    int k2 = 6;
    if(myMap.find(k1) !=myMap.end()){
    	cout<<"\nFound Key "<<k1;
    }

    if(myMap.find(k2) !=myMap.end()){
    	cout<<"\nFound Key "<<k1;
    }
    cout<<endl<<"Accessing values by key...\n";
    cout<<myMap[2]<<endl;
    k1 =13;
    cout<<myMap[k1]; //Will insert missing key as 0 !
    if(myMap.find(k1) !=myMap.end()){
    	cout<<"\nFound Key "<<k1; //UNDESIRABLE BEHAVIOR !!
    }
    //use .at instead
    k1 = 14;
    try { 
    	cout<<endl<<myMap.at(13)<<endl;
    	cout<<endl<<myMap.at(k1);
       	// throw 10; 
    } 
    catch (char *excp)  { 
        cout << "Caught " << excp; 
    } 
    catch (...)  { 
        cout << "Default Exception\n"; 
    } 
    
    //String concat. Note that "found" + "key" wont work as both literals
    string str1 = "Found";
    string str2 = " Key";
    cout <<endl<< str1 + str2 + " +literal";

      
	return 0;     

} 