#include<bits/stdc++.h>
using namespace std;

int subsequence(string input, string *output) {
	if(input.size() == 0) {
		output[0] = "";
		return 1;
	}
	int ans = subsequence(input.substr(1), output);
	for(int i=0;i<ans;i++) {
		output[i+ans] = input[0] + output[i];
	}
	return 2 * ans;
}

int main() {
	string input;
	cin>>input;
	string output[100];
	int ans = subsequence(input, output);
	for(int i=0;i<ans;i++) {
		cout<<output[i]<<endl;
	}
	return 0;
}
