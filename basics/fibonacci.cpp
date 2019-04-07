#include <iostream>
#include <vector>
#include <array>

using namespace std;

int fibRecursive(int n){

	if(n==0 || n==1 ){
		return n;
	}
	else{
		return fibRecursive(n-1) + fibRecursive(n-2);
	}

}

int fibDynamicProg(int n){

	vector<int> memo;
	memo[0] = 0;
	memo[1] =1;

	for (int i=2;i<=n;i++){

		memo[i] = memo[i-1] + memo[i-2];
	}
	return memo[n];
}


int main(int argc, char** argv){
	
	cout <<"Testing fibonacci\n";

	cout<<fibRecursive(10);

	cout<<fibDynamicProg(10);



	return 0;
}