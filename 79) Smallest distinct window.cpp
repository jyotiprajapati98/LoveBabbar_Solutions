using namespace std;
#include <bits/stdc++.h>
int const MAX_CHAR = 256;

// Mehtod to find the smallest distinct Window for substring
string SubString(string str){
    int N = str.length();
    
    //base case
    if(N<=1){
        return str;
    }
    
    int dist = 0;
    bool visited[MAX_CHAR] = {false}; //initialize with false
    
    //count the distict charecters
    for(int i=0; i<N; i++){
        if(visited[str[i]] == false){
            visited[str[i]] = true;
            dist++;
        }
    }//end of for loop
    
    int start = 0, start_index = -1, min_len = INT_MAX;
    
    int cnt = 0;
    int curr_cnt[MAX_CHAR] = {0};
    
    for(int j=0; j<N; j++){
        curr_cnt[str[j]]++;
        
        if(curr_cnt[str[j]] == 1){
            cnt++;
        }
        
        if(cnt == dist){
            while(curr_cnt[str[start]] > 1){
                if(curr_cnt[str[start]] > 1){
                    curr_cnt[str[start]]--;
                }
                start++;
            }
            
            //update the Window size
            int wlen = j - start + 1;
            if(min_len > wlen){
                min_len = wlen;
                start_index = start;
            }
            
        }
    }
    
    return str.substr(start_index, min_len);
}


//main method
int main()
{
	string str = "aabcbcdbca";
	cout << "Smallest window containing all distinct"
			" characters is: "
		<< SubString(str);
	return 0;
}
