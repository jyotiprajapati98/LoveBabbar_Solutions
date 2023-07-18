#include <iostream>
#include <vector>

using namespace std;
int forLoopCount = 0;

vector<int> multiply(vector<int>& digits, int factor) {
    cout<<" \n ____________________________________________";
    cout<<" \n Method  called ->" << forLoopCount;
    cout<<" \n ____________________________________________";
	int carry = 0;
	for (int i = 0; i < digits.size(); i++) {
	    cout<<" \n For  loop called";
		int prod = digits[i] * factor + carry;
		cout<<" \n prod "<<prod;
		digits[i] = prod % 10;
		cout<<"\n digits[i]"<<digits[i];
		carry = prod / 10;
		cout<<"\n carry "<<carry;
	}
	while (carry) {
		digits.push_back(carry % 10);
		carry /= 10;
	}
	forLoopCount++;
    cout<<" \n ____________________________________________\n";
	return digits;
}

void print(vector<int>& digits) {
	for (int i = digits.size() - 1; i >= 0; i--) {
		cout << digits[i];
	}
}

int main() {
	int n = 5;
	vector<int> digits;
	digits.push_back(1);
	for (int i = 2; i <= n; i++) {
		digits = multiply(digits, i);
	}
	print(digits);
	return 0;
}
