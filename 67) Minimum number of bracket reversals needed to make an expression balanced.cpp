#include <iostream>
using namespace std;
#include <stack>

int countMinReversals(string str){
	// Step 1: Initialize a stack of char type and ans as 0.
	stack<char> st;
	int ans = 0;

	// Step 2: Run a loop for each character of the string
	for (int i = 0; i < str.size(); i++) {
	
		// Step 2.1: If ' { ' encountered push it to the
		// stack
		if (str[i] == '{')
			st.push(str[i]);
		// Step 2.2: If ' } ' is encountered
		else {
			// Step 2.2.1: If stack has a '{' present for
			// '}' encountered, pop from the stack.
			if (!st.empty())
				st.pop();
			// Step 2.2.2: If stack is empty, change '}' to
			// '{' and push it to stack and increment ans by
			// 1
			else {
				st.push('{');
				ans++;
			}
		}
	}
	// Step 3: if stack size is odd return -1.
	if (st.size() % 2 != 0)
		return -1;
	// Step 4: Increment ans by ( stackSize/2 ).
	ans += st.size() / 2;

	return ans;
}

int main()
{
	string expr = "{{{{}}";
	cout << countMinReversals(expr);
	return 0;
}
