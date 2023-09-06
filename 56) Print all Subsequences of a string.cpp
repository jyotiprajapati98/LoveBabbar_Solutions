#include <bits/stdc++.h>
using namespace std;

void Subsequence(string input, string output)
{
	if (input.empty()) {
		cout << output << endl;
		return;
	}
    //recursion
	Subsequence(input.substr(1), output + input[0]);
	Subsequence(input.substr(1), output);
}

// Driver code
int main(){
    string input = "abc";
	string output = "";
	//call method
    Subsequence(input, output);
	return 0;
}
