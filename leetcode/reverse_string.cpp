#include <iostream>
#include <string>
#include <cstring>
#include <vector>

#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    void reverseString(vector<char>& s) {

    	int len = s.size();
    	int i  = 0;

    	while (i<= (len-i-1)){
    		char temp = s[i];
    		s[i] = s[len-i-1];
    		s[len-i-1] = temp;
    		i++;

    	}


        
    }
};

void print(std::vector<char> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}

int main (int argc,char** argv){

	Solution soln;
	vector<char> vect1{ 'h','e','l','l','o' };
    sort(vect1.begin(),vect1.end());
	soln.reverseString(vect1);
    print (vect1);
	// cout << vect1;



	return 0;
}