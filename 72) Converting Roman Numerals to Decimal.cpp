#include <bits/stdc++.h>
using namespace std;
/*
//using unordered map
class Solution {
  public:
    int romanToDecimal(string &str) {
       //using unordered map
       unordered_map<char, int> unmap;
       unmap['I'] = 1;
       unmap['V'] = 5;
       unmap['X'] = 10;
       unmap['L'] = 50;
       unmap['C'] = 100;
       unmap['D'] = 500;
       unmap['M'] = 1000;
       
       //check the max values
       int max = unmap[str[str.length()-1]];
       int ans = 0;
       
       for(int i=str.length()-1; i>=0; i--){
           int number = unmap[str[i]];
           
           if(number>=max){
               ans = number + ans;
               max = number;
           }else{
               ans -= number;
           }
       }
       
       return ans;
    }
*/
int romanToDecimal(string s){
	int ans = 0, i;
	for (i = 0; i < s.size() - 1; i++) {
		if (s[i] == 'I' && s[i + 1] == 'V') {
			ans += 4;
			i++;
			continue;
		}
		else if (s[i] == 'I' && s[i + 1] == 'X') {
			ans += 9;
			i++;
			continue;
		}
		else if (s[i] == 'X' && s[i + 1] == 'L') {
			ans += 40;
			i++;
			continue;
		}
		else if (s[i] == 'X' && s[i + 1] == 'C') {
			ans += 90;
			i++;
			continue;
		}
		else if (s[i] == 'C' && s[i + 1] == 'D') {
			ans += 400;
			i++;
			continue;
		}
		else if (s[i] == 'C' && s[i + 1] == 'M') {
			ans += 900;
			i++;
			continue;
		}
		else if (s[i] == 'I')
			ans += 1;
		else if (s[i] == 'V')
			ans += 5;
		else if (s[i] == 'X')
			ans += 10;
		else if (s[i] == 'L')
			ans += 50;
		else if (s[i] == 'C')
			ans += 100;
		else if (s[i] == 'D')
			ans += 500;
		else if (s[i] == 'M')
			ans += 1000;
	}

	if (s.size() > i) {
		if (s[i] == 'I')
			ans += 1;
		else if (s[i] == 'V')
			ans += 5;
		else if (s[i] == 'X')
			ans += 10;
		else if (s[i] == 'L')
			ans += 50;
		else if (s[i] == 'C')
			ans += 100;
		else if (s[i] == 'D')
			ans += 500;
		else if (s[i] == 'M')
			ans += 1000;
	}

	return ans;
}

int main(){
	string str = "MCMIV";
	cout<<"decimal number is "<<str<<"\n";
	cout << "Roman number is "<< romanToDecimal(str) << endl;
	return 0;
}
