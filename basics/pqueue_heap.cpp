/*
Priority queues and min heaps, greater , rand tested 
Code to test priority queue with pairs of data, sorted by the first item
*/

#include<iostream>
#include<queue>
#include<algorithm>
#include<stdlib.h>
#include<time.h>
#include<string>
#include<tuple>
using namespace std;

int main(){
	srand ( time(NULL) );
	cout<<"time:"<<time(NULL)<<endl;
	cout <<rand()%90+10;

	typedef tuple<int,int,string> student;
	priority_queue<student> ranks;
	student s1 = make_tuple(5,15,"Sean");
	student s2 = make_tuple(3,15,"Bean");
	student s3 = make_tuple(10,15,"Dean");
	ranks.push(s1);
	ranks.push(s2);
	ranks.push(s3);
	student s = ranks.top();
	cout<<endl<<get<2>(s);


	return 0;
}