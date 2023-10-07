#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	int addMinChar(string str1) {
		int n = str1.length();
		int start = 0;
		int end = n - 1;
		int res = 0;
		while (start < end) { // While the pointers have not met in the middle of the string
			if (str1[start] == str1[end]) { // If the characters at the start and end pointers are equal
				start++; // Move the start pointer to the right
				end--; // Move the end pointer to the left
			}
			else {
				res++; // Increment the count of characters to be added
				start = 0; // Reset the start pointer to the beginning of the string
				end = n - res - 1; // Reset the end pointer to the end of the string with a reduced number of characters
			}
		}
		return res; // Return the count of characters to be added
	}
};

int main() {
	Solution sol;
	string str = "AACECAAAA";
	cout << sol.addMinChar(str) << endl;
	return 0;
}
