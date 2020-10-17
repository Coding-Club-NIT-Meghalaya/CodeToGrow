#include <iostream>
#include<stack>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    stack <pair<int,int>> s;
	    vector <int> v;
	    for(int i=0;i<n;i++){
	        if(s.empty()){
	           v.push_back(-1); 
	        }
	        else if(s.size()>0&&s.top().first>arr[i]){
	            v.push_back(s.top().second);
	        }
	        else if(s.size()>0&&s.top().first<=arr[i]){
	            while(!s.empty()&&s.top().first<=arr[i]){
	                s.pop();
	            }
	            if(s.empty()){
	                v.push_back(-1);
	            }
	            else
	            v.push_back(s.top().second);
	        }
	        s.push({arr[i],i});
	    }
	    vector <int> ans;
	    for(int i=0;i<n;i++){
	       ans.push_back(i-v[i]);
	    }
	    for(int i=0;i<n;i++){
	        cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}