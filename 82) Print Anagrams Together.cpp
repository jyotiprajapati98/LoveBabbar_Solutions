
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

//method for chekcing the array

    vector<vector<string> > Anagrams(vector<string>& str) {
       unordered_map<string, vector<string>> umap;
       
       for(int i=0; i<str.size(); i++){
           string a = str[i];
           
           //sorting each words in string array
           sort(str[i].begin(), str[i].end());
           
           //push the words in array
           umap[str[i]].push_back(a);
       }
       
       vector<vector<string>> result;
       
       for(auto i:umap){
           result.push_back(i.second);
       }
       
       return result;
    }


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
