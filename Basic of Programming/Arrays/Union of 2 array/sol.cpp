#include <iostream>
#include<unordered_map>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n;
	    cin>>m;
	    int arr1[n],arr2[m];
	    for(int i=0;i<n;i++)cin>>arr1[i];
	    for(int i=0;i<m;i++)cin>>arr2[i];
	    
	    unordered_map <int,int> mp;
	    for(int i=0;i<n;i++)mp[arr1[i]]++;
	    for(int j=0;j<m;j++)mp[arr2[j]]++;
	    
	    cout<<mp.size()<<endl;
	    
	}
	return 0;
}