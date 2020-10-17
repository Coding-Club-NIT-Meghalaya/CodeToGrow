#include <iostream>
#include<bits/stdc++.h> 
using namespace std;


int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s[n];
	    for(int i=0;i<n;i++){
	      cin>>s[i];
	    }
	unordered_map <string ,int> my;
    
    for(int i=0;i<n;i++){
        sort(s[i].begin(),s[i].end());
      my[s[i]]++;
    }
    vector<int> res;
    for(auto i=my.begin();i!=my.end();i++){
        res.push_back(i->second);
    }
    sort(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
	}
	return 0;
}