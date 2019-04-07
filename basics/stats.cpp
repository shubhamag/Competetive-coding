/*
Calculate statistics of a vector 
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

unordered_map<string,double> stats (vector<int> v){
	int length = v.size();
	int total = 0;
	sort(v.begin(),v.end());

	unordered_map <int,int> counts;

	for (auto itr = v.begin();itr!=v.end();itr++){
		int val = *itr;
		total += *itr;
		counts[val]++;

	}
	int mode=0;int mode_count=0;
	for (auto itr  = counts.begin();itr!=counts.end();itr++){
		if(itr->second > mode_count){
			mode = itr->first;
			mode_count = itr->second;
		}
	}

	unordered_map<string,double> vecStats;
	vecStats["min"] =v.front();
	vecStats["max"] = v.back();
	vecStats["median"] = v[(int)length/2];
	vecStats["mean"] =(double)total/length;
	vecStats["mode"] =mode;

	return vecStats;
}


int main(){

	vector<int> myVec = {3,4,532,1,1,2,3,54,23};
	auto vecStats = stats(myVec);
	cout<<"\nMin:"<<vecStats["min"];
	cout<<"\nMax:"<<vecStats["max"];
	cout<<"\nMean:"<<vecStats["mean"];
	cout<<"\nMedian:"<<vecStats["median"];
	cout<<"\nMode:"<<vecStats["mode"];

}
